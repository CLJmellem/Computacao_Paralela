//Jo�o Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli C�sar Dias Pereira - 41911296

#include <stdio.h>

//10. Crie uma fun��o capaz de multiplicar uma linha de uma matriz por um dado n�mero. Fa�a o mesmo para uma coluna.

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
	
	printf("Matriz inicial:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}	
	
	int number, line, column;
	printf("Digite o numero:");
	scanf("%d", &number);
	printf("Digite a linha:");
	scanf("%d", &line);
	
	
	
	printf("\n");
	for(i=0;i<3;i++){
		matriz[line-1][i] *= number;
	}		
	printf("\n");
	

	printf("Mutiplicando pela coluna:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}		

	printf("Digite a coluna:");
	scanf("%d", &column);

	printf("\n");
	for(i=0;i<3;i++){
		matriz[i][column-1] *= number;
	}		
	printf("\n");
	

	printf("Mutiplicando pela coluna:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}		
		
	return 0;
}
