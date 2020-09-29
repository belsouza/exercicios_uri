#include <stdio.h>
#include <stdlib.h>
#define TAM 12

void opmedia( double matriz[12][12] , double *soma, double *cont){
	
	int i, j, k;
	double tsoma = 0, tcont = 0;
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			
			if(i < j){
				tsoma = tsoma + matriz[i][j];
				tcont++;	
			}						
		}		
	}
	
	*soma = tsoma;
	*cont = tcont;	
}


int main(void){
	
	int coluna, i, j;
	char op;
	double soma, media, matriz[TAM][TAM], aux, cont = 0;
	
	fscanf(stdin, "%c\n", &op);	
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			fscanf(stdin, "%lf", &aux);			
			matriz[i][j] = aux;
		}
	}	
	
	opmedia(matriz, &soma, &cont);	
	
	if(op == 'S'){
		printf("%.1lf\n", soma);
	}
	
	if(op == 'M'){
		media = soma / cont;
		printf("%.1lf\n", media);	
	}
		
	return 0;

}
