#include <stdio.h>
#define TAM 1000

int main(void){
	
	unsigned short int N[TAM], n, i, j, *vet;	
	scanf("%hu", &n);
	
	vet = N;
	
	i = 0;
	while(i < TAM){			
		j = 0;
		while(j < n){
			vet[i] = j;
			j++;
			i++;
		}		
	}
	
	for(i = 0; i < TAM; i++){
		printf("N[%hu] = %hu\n", i, N[i]);
		
	}
	
	return 0;
}
