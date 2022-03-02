//Jo�o Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli C�sar Dias Pereira - 41911296	

#include <stdio.h>
#include <stdlib.h>

//12. Faça uma função que retorne a posição de um dado caracter dentro de uma string.

int main(){
    char frase[100];
    char c;
    int verify = 0;

    printf("Digite a frase: "); 
    fgets(frase, sizeof(frase), stdin);
    
    printf("Digite o char a ser buscado: ");
    scanf("%c", &c);

    for(int i = 0; i < sizeof(frase); i++){

        if(frase[i] == c){
            printf("%c na %i posicao da frase\n", c, i);
            verify = 1;
        }
    }
    
    if(verify == 0){
        printf("Nao existe esse char na frase");
    }
}