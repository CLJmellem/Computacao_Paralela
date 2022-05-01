//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876

#include <stdio.h>

int main(void)
{
  float sum = 0;
  float i;

  for(i = 1; i<=10; i++)
  {
    sum += 1/i;
  }

  printf("O valores para ln(10): %f", sum);
  
  return 0;
}


