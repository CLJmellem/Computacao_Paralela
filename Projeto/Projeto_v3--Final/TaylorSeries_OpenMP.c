//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

long int T = 100000000000; //Valor utilizado para o calculo de Taylor: 1/1 +...+ 1/T

double result; //Valor final das somas das threads (global)

void TaylorSeries(int nt){

  double sum; //Valor da soma local da thread sendo exucatada

  int tid = omp_get_thread_num(); //Coleta do numero da thread atual
  double aux = ((T / nt) * tid); //Valor de inicio do for ex: T=100; nt=10; tid=3 ;; (100/10)*3= 30(este eh o inicio do for)
  double aux2 = (T/nt) + aux; //Valor de fim do for ex: T=100; nt=10; aux=30 ;; (100/10)+30= 40(este eh o fim do for)

  for(double i = aux + 1; i <= aux2; i++){ //Para evitar que alguns valores sejam calculados 2x, +1 eh somado ao inicio do for;Seguindo o ex acima, o inicio será 31
    sum += 1/i;
  }

  #pragma omp critical //Area critica, evita condição de corrida, assim enquanto uma thread realiza essa area, outras n podem acessar, assim n ocorre resultados imprevistos
  result += sum;

  printf("Resultado da thread (%d): %f\n", tid, sum);
}


int main(void)
{
  int nt= omp_get_num_procs(); //Pega o numero de threads disponivel no sistema 
  printf("\n--------EXECUCAO PARALELA-----------\n");

  #pragma omp parallel num_threads(nt) //Area do parelismo, num_threads(nt) indica a quantidade de threads a ser criada pelo programa
  {
    TaylorSeries(nt);
  }

  printf("O resultado para ln(%ld), utilizando %d threads: %f\n",T, nt, result);

  return 0;
}
