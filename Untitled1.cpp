#include <stdio.h>

int main(){

	int nums[10], i;
	
	int soma=0;
	
	for(i=0; i<10; i++){
		printf("Digite o numero %d:", i);
		scanf("%d", &nums[i]);
 		printf("%d\n", nums[i]);
	}
	
	for(i=0; i<10; i++){
		
		soma=soma+nums[i];
	}
	
	float media=soma/10;
	
	printf("media=%.2f", media);
 
	
	
	return 0;
}
