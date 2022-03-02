#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#pragma warning(disable : 4996)
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876
//Cássio Luis Junqueira Mellem Filho - 32089694

void  processoFilho(int num);     /*Processo filho*/
void  processoPai(int num);       /*Processo Pai*/

void  main(void)
{
    pid_t  pid;
    pid = fork();
    wait(NULL);
    int num;
    if (pid == 0) {
        printf("Entre o numero: ");
        scanf("%d", &num);
        processoFilho(num);
    }
    else {
        printf("Entre o numero: ");
        scanf("%d", &num);
        processoPai(num);
    }
}

void  processoPai(int num) /*fatorial no pai*/
{
    int i, j;
    j = num;

    for (i = 1; j > 1; j = j - 1) {
        i = i * j;
    }

    printf("Numero Fatorial e: %d\n", i);
}

void  processoFilho(int num) /*fatorial no filho*/
{
    int i, j;
    j = num;

    for (i = 1; j > 1; j = j - 1) {
        i = i * j;
    }

    printf("Numero Fatorial e: %d\n",i);
}