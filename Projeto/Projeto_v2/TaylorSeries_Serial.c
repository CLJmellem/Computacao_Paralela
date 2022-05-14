//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

  printf("---------EXECUCAO SERIAL---------\n");
  float soma = 0, x = 1;

  for(; x<=100; x++)
  {
    soma += 1/x;
  }

  printf("O valor para ln(100) é: %f\n", soma);
}