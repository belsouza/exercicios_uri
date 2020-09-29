#include <stdio.h>
#define TAM 100

int main(void){
	
	int i;
	double N[TAM], temp, x;
	scanf("%lf", &x);
	
	temp = x;
	for(i = 0; i < TAM; i++){
		N[i] = temp;
		temp = temp / 2.0;		
	}
	
	for(i = 0; i < TAM; i++){
		printf("N[%d] = %.4lf\n", i, N[i]);
	}
	return 0;
}
