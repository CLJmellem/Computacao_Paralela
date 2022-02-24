//Jo�o Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli C�sar Dias Pereira - 41911296	

#include <stdio.h>
#include <stdlib.h>

//11. Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.


int main(){
    
    int matrizSoma[2][3] = {{25,64,90},{45,30,10}};
    int matrizMulti[2][3] = {{25,64,90},{45,30,10}};

    printf("SOMA ---\n");
    for(int i = 0; i < 3; i++){
        
        matrizSoma[1][i] = matrizSoma[0][i] + matrizSoma[1][i]; 
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    
    printf("\nMULTIPLICACAO ---\n");
    for(int i = 0; i < 3; i++){
        
        matrizMulti[1][i] = matrizMulti[0][i] * matrizMulti[1][i]; 
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrizMulti[i][j]);
        }
        printf("\n");
    }
    
}