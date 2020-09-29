#include <stdio.h>
#define TAM 10

int main(void){
	
	int i, n, N[TAM], prod;
	scanf("%d", &n);
	
	if(n <= 50){
		
		prod = n;		
		for(i = 0; i < TAM; i++){			
			
			N[i] = prod;
			prod = prod * 2;			
		}
		
		for(i = 0; i < TAM; i++){
			printf("N[%d] = %d\n", i, N[i]);
		}
	}	
	
	return 0;
}
