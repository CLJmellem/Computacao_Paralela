//João Vitor Lima Lipert - 32088876
//Cássio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#pragma warning(disable : 4996)


typedef struct {
    char nome[100];
    int idade;
    float altura;
}Pessoa;

void ImprimeVetor(Pessoa* povo, int i, FILE* result)
{
    int a = 0;
    char idade[100];
    char alt[100];
    for (a; a < i; a++) {
        printf("\n%s\n%d\n%f\n", povo[a].nome,povo[a].idade,povo[a].altura);
        itoa(povo[a].idade, idade, 10);
        gcvt(povo[a].altura, 3, alt);
        fputs(povo[a].nome, result);
        fputs(idade, result);
        fputs("\n", result);
        fputs(alt, result);
        fputs("\n", result);
    }
}


int leDadosUmaPessoa(Pessoa* p, FILE* arq)
{
    if (!feof(arq))
    {
        char dados[100];
        fgets(dados, sizeof(dados), arq);
        strcpy(p->nome, dados);
        fgets(dados, sizeof(dados), arq);
        p->idade = atoi(dados);
        fgets(dados, sizeof(dados), arq);
        p->altura = atof(dados);
        return 1;
    }
    return 0;
}

int Comp(const void* a, const void* b)
{
    Pessoa* pA = (Pessoa*)a;
    Pessoa* pB = (Pessoa*)b;
    return pA->altura > pB->altura ? -1 : 1;
}

void OrdenaVetor(Pessoa* povo, int i)
{
    qsort(povo, i, sizeof(Pessoa), Comp);
}


void FechaArquivo(FILE* arq)
{
    fclose(arq);
}



int main(void) {

    char s1[50];
    Pessoa povo[10], p;
    FILE* arq;
    FILE* result;
    int i = 0;

    printf("Arquivo: ");
    scanf("%s", s1);

    arq = fopen(s1, "r");
    result = fopen("result.txt", "a");
    if (arq != NULL) {
        while (1) {
            if (leDadosUmaPessoa(&p, arq))
            {
                povo[i] = p;
                i++;
            }
            else { 
                break; 
            }
        } 

        FechaArquivo(arq);
        OrdenaVetor(povo, i);
        ImprimeVetor(povo, i, result);
    }

    else {
        printf("Erro na abertura do arquivo");
    }

    return 0;
}