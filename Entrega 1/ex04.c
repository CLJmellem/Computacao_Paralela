//Jo�o Vitor Lima Liper - 3208876
//Cassio Luis Junqueira Mellem filho - 32089694
//Eric Felipeli C�sar Dias Pereira - 41911296	

#include <stdio.h>


void main(){
	
	char a[10] = "Roberta";
	char b[10] = "Aline";

	if(strcmp(a,b) < 0)
    {
        printf("%s > %s",a,b);
    }
	else {
		printf("%s > %s", b, a);
	}
		
	return 0;
}
