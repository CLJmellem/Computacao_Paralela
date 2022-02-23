//João Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296

#include <stdio.h>


int main(void){
    int n = 11;
    int inicio = 1;
    int fim = n;
    for(int i = 0; i <= n/2; i++){
        printf("%*s", i*2, "");
        for(int j = inicio; j <= fim; j++)printf("%d ", j);
        inicio++;
        fim--;
        printf("\n");
    }
    return 0;
}
