//João Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296

#include <stdio.h>

void main(){
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
	int menor = matriz [0][0];
	
	printf("Matriz:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}	
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
				
		}
		
	}	
	
	printf("\nMenor valor:%d",menor);
		
	return 0;
}
