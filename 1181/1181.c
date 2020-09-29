#include <stdio.h>
#include <stdlib.h>
#define TAM 12

double opsoma( double matriz[12][12], int linha ){
	int i;
	double soma = 0;	
	for(i = 0; i < TAM; i++){
		soma = soma + matriz[linha][i];
	}
	
	return soma;	
}

void exibir( double matriz[12][12]){
	int i, j;
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%.1lf    \n", matriz[i][j]);
		}
		printf("\n");
	}
}


int main(void){
	
	int linha, i, j;
	char op;
	double soma, media, matriz[TAM][TAM], aux;
	FILE *fp = fopen("debug.txt", "r");	
	
	fscanf(fp, "%d ", &linha);
	fscanf(fp, "%c\n", &op);	
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			fscanf(fp, "%lf", &aux);
			matriz[i][j] = aux;
		}
	}
	
	soma = opsoma(matriz, linha);
	
	if(op == 'S'){
		printf("%.1lf\n", soma);
	}
	
	if(op == 'M'){
		media = soma / TAM;
		printf("%.1lf\n", media);	
	}	
	
	fclose(fp);
	return 0;

}
