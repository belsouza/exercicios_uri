#include <stdio.h>
#define TAM 20

int main(void){
	
	int i, j, N[TAM], temp;
	double pivo;
	
	for(i = 0; i < TAM; i++){
		fscanf(stdin, "%d", &N[i]);
	}	
	
	pivo = TAM / 2.0;
	for(i = 0, j = TAM-1; (i <= pivo) && (j >= pivo) ; i++, j--){
		temp = N[i];
		N[i] = N[j];
		N[j] = temp;
	}
	
	for(i = 0; i < TAM; i++){
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}
