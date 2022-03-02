//João Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296

#include <stdio.h>

typedef struct pessoa {
  char Nome[200];
  int Idade;
  float Peso;
  float Altura;
} Pessoa;

void main(){
	Pessoa ListaDePessoas[3];
	
	  for(int i=0; i<3; i++){
	    printf("Insira o nome: ");
	    scanf("%s%*c", &ListaDePessoas[i].Nome);
	    printf("Insira a idade: ");
	    scanf("%d", &ListaDePessoas[i].Idade);
	    printf("Insira o peso: ");
	    scanf("%f", &ListaDePessoas[i].Peso);
	    printf("Insira a altura: ");
	    scanf("%f", &ListaDePessoas[i].Altura);
	  }
	  
	  for(int i=0; i<3; i++){
	    printf("\n\nNome: %s", ListaDePessoas[i].Nome);
	    printf(" Idade: %d", ListaDePessoas[i].Idade);
	    printf(" Peso: %.2f", ListaDePessoas[i].Peso);
	    printf(" Altura: %.1f", ListaDePessoas[i].Altura);
	  }
		
	return 0;
}
