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
