//João Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296

#include <stdio.h>


void main(){
	
  int matriz[10][10], transposta[10][10], line, column;
  printf("Digite as linhas e colunas: ");
  scanf("%d %d", &line, &column);
	int i, j;
	
  
  printf("\nPreencha os numeros das matrizes:\n");
  for (int i = 0; i < line; ++i)
  for (int j = 0; j < column; ++j) {
    printf("Digite o numero a%d%d: ", i , j );
    scanf("%d", &matriz[i][j]);
  }
	
	printf("Matriz inicial:\n");
	for(i=0;i<line;i++){
		for(j=0;j<column;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}	
	

	for ( i = 0; i < line; ++i){
		for ( j = 0; j < column; ++j) {
	   		transposta[j][i] = matriz[i][j];
		}
	}
	
	
	printf("Matriz transpota:\n");
	for(i=0;i<column;i++){
		for(j=0;j<line;j++){
			printf("%d ", transposta[i][j]);
		}
		printf("\n");
	}	
		
	return 0;
}
