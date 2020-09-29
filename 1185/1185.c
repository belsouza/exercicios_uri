#include <stdio.h>
#include <stdlib.h>
#define TAM 12

void opmedia( double matriz[12][12] , double *soma, double *cont){
	
	int i, j, k;
	double tsoma = 0, tcont = 0;
	
	k = TAM-1;
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			
			if(j < k){
				tsoma = tsoma + matriz[i][j];
				tcont++;	
			}						
		}
		k--;		
	}
	
	*soma = tsoma;
	*cont = tcont;	
}

void exibir( double matriz[12][12]){
	
	int i, j, k;
	
	k = TAM-1;	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			
			if(j < k){
				printf("%2.1lf ", 1.0);			
			}
			else
			{
				printf("%2.1lf ", 0.0);
			}
									
		}
		k--;		
		printf("\n");
	}
}


int main(void){
	
	int coluna, i, j;
	char op;
	double soma, media, matriz[TAM][TAM], aux, cont = 0;
	FILE *fp = fopen("debug.txt","r");
	
	fscanf(fp, "%c\n", &op);	
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			fscanf(fp, "%lf", &aux);			
			matriz[i][j] = aux;
		}
	}
	
	exibir(matriz);
	
	
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
