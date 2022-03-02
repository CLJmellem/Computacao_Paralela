//João Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296

#include <stdio.h>

void main(){

	int N1 = 9;
	int N2 = 7;
	int N3 = 6;
	int ME = (N1+N2+N3)/3;
	int MA;
	MA = (N1 + N2*2 + N3*3 + ME)/7;
	
	if(MA >= 9){
		printf("Media final:%d\n", MA);
		printf("Nota A");
	}
	else if(MA >= 7.5){
		printf("Media final:%d\n", MA);
		printf("Nota B");
	}
	else if(MA >= 6){
		printf("Media final:%d\n", MA);
		printf("Nota C");
	}
	else if(MA >= 4){
		printf("Media final:%d\n", MA);
		printf("Nota D");
	}
	else{
		printf("Media final:%d\n", MA);
		printf("Nota E");
	}
	printf("\n");	
	
		
	return 0;
}
