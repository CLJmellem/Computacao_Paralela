//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876

#include <stdio.h>
#include <stdlib.h>

long int T = 10000000;
float soma = 0; 

int main(void)
{

  printf("---------EXECUCAO SERIAL---------\n");
  float x = 1;

  for(; x<=T; x++)
  {
    soma += 1/x;
  }

  printf("O valor para ln(%ld) é: %f\n",T, soma);
}