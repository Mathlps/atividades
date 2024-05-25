#include <stdio.h>
#include <string.h>

int main(){
	
	char v1[10], v2[10], aux[10];
	
	
	fgets(v1, sizeof(v1), stdin);
    fgets(v2, sizeof(v2), stdin);
	
	if(strcmp(v1,v2) > 0){
		strcpy(aux, v1);
		strcpy(v1, v2);
		strcpy(v2, aux);
	}
	printf("v1= %s e \n v2= %s", v1, v2);
	
	return 0;
}
