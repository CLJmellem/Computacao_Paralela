#include <stdio.h>


void main(){
	
	char a[10] = "Ana";
	char b[10] = "Caroline";

	if(strcmp(a,b) < 0)
    {
        printf("%s > %s",a,b);
    }
	else {
		printf("%s > %s", b, a);
	}
		
	return 0;
}
