//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>


float TaylorSeries(float i){

  int max = 100; 

  float sum = 0;

  for(; i <= max; i +=2)
    {
      sum += 1/i;
    }

  return sum;
}


int main(void)
{

  printf("\n--------EXECUCAO PARALELA-----------\n");
  int tid;
  float result1, result2;

  #pragma omp parallel num_threads(2)
  {
    tid = omp_get_thread_num();
    if(tid == 0)
      result1 = TaylorSeries(1);
    else
      result2 = TaylorSeries(2);
  }
  printf("O resultado da thread 0 foi de: %f\n", result1);
  printf("O resultado da thread 1 foi de: %f\n", result2);
  printf("E o resultado final: %f", result1 + result2);

  return 0;
}