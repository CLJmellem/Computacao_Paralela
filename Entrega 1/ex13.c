//João Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296	

//13. Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.

#include <iostream>
#pragma warning(disable : 4996)

int main(void) {
    char Str[100];
    int i;
    printf("Digite uma palavra de ate 100 letras: ");
    fgets(Str, 100, stdin);
    int size_Str = strlen(Str) - 1;
    printf("Digite a posicao do caracter que deseja retirar por index: ");
    scanf("%i", &i);
    memmove(&Str[i], &Str[i + 1], strlen(Str) - i);
    printf("%s\n", Str);
}