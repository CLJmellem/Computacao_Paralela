//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876

#include <stdio.h>
#include <time.h>
#include <pthread.h>

void TaylorSeries(void *arg){
  float x = *(int*)arg;
  int max = 100; 

  float sum = 0;

  time_t start, end;

  start = clock();
  for(; x<=max; x+=2)
  {
    sum += 1/x;
  }

  end = clock();

  double time_taken = ((double)end - start)/CLOCKS_PER_SEC;
  if((int)x % 2 == 0)
    printf("O valor par de ln(%d) é: %f\n",max, sum);
  else
    printf("O valor impar de ln(%d) é: %f\n",max, sum);

  printf("O tempo de execução em segundos foi de: %f\n", (time_taken));
}

int main(void)
{
  pthread_t tid0, tid1;
  int i = 1; 
  int j = 2;

  pthread_create(&tid0, NULL, (void *)&TaylorSeries, &i);
  pthread_create(&tid1, NULL, (void *)&TaylorSeries, &j);
  pthread_join(tid0, NULL);
  pthread_exit(NULL);

  return 0;
}
