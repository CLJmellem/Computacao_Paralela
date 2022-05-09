//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876

#include <stdio.h>
#include <time.h>
#include <pthread.h>

typedef struct thread_data{
  float par;
  float impar;
  float i;
  float j;
}thread_data;

void *TaylorSeriesImpar(void *arg){
  thread_data *tdata = (thread_data *)arg;
  int max = 100; 

  float sum = 0;

  time_t startI, endI;

  startI = clock();
  for(; tdata->i <= max; tdata->i +=2)
    {
      sum += 1/tdata->i;
    }
  endI = clock();

  double time_taken_impar = ((double)endI - startI)/CLOCKS_PER_SEC;

  tdata->impar = sum;

  printf("O valor impar de ln(%d) é: %f\n",max, sum);
  printf("O tempo de execução em segundos foi de: %f\n", (time_taken_impar));

  pthread_exit(NULL);
}

void *TaylorSeriesPar(void *arg){
  thread_data *tdata = (thread_data *)arg;
  int max = 100; 

  float sum = 0;

  time_t startP, endP;

  startP = clock();
  for(; tdata->j <= max; tdata->j +=2)
    {
      sum += 1/tdata->j;
    }
  endP = clock();

  double time_taken_par = ((double)endP - startP)/CLOCKS_PER_SEC;

  tdata->par = sum;

  printf("O valor par de ln(%d) é: %f\n",max, sum);
  printf("O tempo de execução em segundos foi de: %f\n", (time_taken_par));

  pthread_exit(NULL);
}

int main(void)
{
  pthread_t tid0, tid1;
  thread_data tdata;
  tdata.i = 1;
  tdata.j = 2;

  printf("---------EXECUCAO SERIAL---------\n");
  float soma = 0, x = 1;
  time_t start, end;

  start = clock();
  for(; x<=100; x++)
    {
      soma += 1/x;
    }
  start = clock() - start;

  double time_taken_serial = ((double)start)/CLOCKS_PER_SEC;
  printf("O valor para ln(100) é: %f\n", soma);
  printf("O tempo de execução em segundos foi de: %f\n", (time_taken_serial));
  printf("--------FINAL EXECUCAO SERIAL-------\n");

  printf("\n--------EXECUCAO PARALELA-----------\n");
  pthread_create(&tid0, NULL, &TaylorSeriesImpar, (void*)&tdata);
  pthread_join(tid0, NULL);
  pthread_create(&tid1, NULL, &TaylorSeriesPar, (void*)&tdata);
  pthread_join(tid1, NULL);
 
  printf("\nResultado final: %f\n", tdata.impar + tdata.par);

  return 0;
}