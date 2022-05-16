//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli CÃ©sar Dias Pereira - 41911296
//JoÃ£o Vitor Lima Lipert - 32088876

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

long int T = 10000000;

float sum = 0;

float TaylorSeries(){

  float i = 1, j = T/2, k = T/(4/3), l = T;
  int tid = omp_get_thread_num();
	
  switch(tid){
  	case 0:
  		for(; i <= T/(4/1); i++)
    	{
      		sum += 1/i;
    	}
    	break;
    case 1:
    	for(; j <= T/2; j++)
    	{
      		sum += 1/j;
    	}
    	break;
    case 2:
    	for(; k <= T/(4/3); k++)
    	{
      		sum += 1/k;
    	}
    	break;
    case 3:
    	for(; l <= T; l++)
    	{
      		sum += 1/l;
    	}
    	break;
   }
   return sum;
}


int main(void)
{

  printf("\n--------EXECUCAO PARALELA-----------\n");

  #pragma omp parallel num_threads(4)
  {
    TaylorSeries();    
  }
 
  printf("O resultado para ln(%ld): %f\n",T, sum);
 
  return 0;
}