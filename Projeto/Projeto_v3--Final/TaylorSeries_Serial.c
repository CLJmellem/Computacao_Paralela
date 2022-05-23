//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  long int T = 100000000000;
  double soma = 0; 

  printf("---------EXECUCAO SERIAL---------\n");
  double x = 1;

  for(; x<=T; x++)
  {
    soma += 1/x;
  }

  printf("O valor para ln(%ld) é: %f\n",T, soma);

  return 0;
}