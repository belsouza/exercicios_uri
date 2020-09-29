#include <stdio.h>
#include <stdlib.h>
#define TAM 12

double opsoma( double matriz[12][12], int coluna ){
	int i;
	double soma = 0;	
	for(i = 0; i < TAM; i++){
		soma = soma + matriz[i][coluna];
	}
	
	return soma;	
}


int main(void){
	
	int coluna, i, j;
	char op;
	double soma, media, matriz[TAM][TAM], aux;
	
	fscanf(stdin, "%d ", &coluna);
	fscanf(stdin, "%c\n", &op);	
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			fscanf(stdin, "%lf", &aux);
			matriz[i][j] = aux;
		}
	}
	
	soma = opsoma(matriz, coluna);
	
	if(op == 'S'){
		printf("%.1lf\n", soma);
	}
	
	if(op == 'M'){
		media = soma / TAM;
		printf("%.1lf\n", media);	
	}	
	
	return 0;

}
