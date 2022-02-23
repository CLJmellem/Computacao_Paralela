//João Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
#include <stdio.h>

void main(){
	
	
// 9. Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.	

    // Exercicio 9.
	printf("\n");
	int matriz[3][3];
	
	matriz[0][0] = 1;
	matriz[0][1] = -2;
	matriz[0][2] = 3;
	matriz[1][0] = -4;
	matriz[1][1] = 5;
	matriz[1][2] = -6;
	matriz[2][0] = 7;
	matriz[2][1] = -8;
	matriz[2][2] = 9;
	int i, j;
	
	printf("Matriz inicial:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}	
	
	
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j] < 0){
				printf("Deixando %d positivo\n", matriz[i][j]);
				matriz[i][j] *= -1;
			}
		}
	}		
	printf("\n");
	
	printf("Matriz final:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}	
		
	return 0;
}
