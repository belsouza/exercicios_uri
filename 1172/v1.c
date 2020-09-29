#include <stdio.h>
//Exercicio 1172

int main(void){
	
	int X[10], i, tam;
	
	tam = 10;
	for(i = 0; i < tam; i++){
		scanf("%d", &X[i]);
	}
	
	for(i = 0; i < tam; i++){
		if(X[i] <= 0){
			X[i] = 1;
		}
	}
	
	for(i = 0; i < tam; i++){
		printf("X[%d] = %d\n", i, X[i]);
	}
	
	return 0;	
}
