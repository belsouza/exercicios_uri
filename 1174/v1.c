#include <stdio.h>
#define TAM 100

int main(void){
	
	double A[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		scanf("%lf", &A[i]);		
	}
	
	for(i = 0; i < TAM; i++){
		
		if(A[i] <= 10.0)
		{
			printf("A[%d] = %.1lf\n", i, A[i]);
		}
	}
	
	return 0;
}
