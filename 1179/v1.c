#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


void exibirpar( int *vet ){
	int i;	
	for(i = 0; i < 5; i++){
		if(vet[i] != INT_MAX){
			printf("par[%d] = %d\n", i, vet[i]);
		}
		
	}
}

void exibirimpar( int *vet ){
	int i;	
	for(i = 0; i < 5; i++){
		if(vet[i] != INT_MAX){
			printf("impar[%d] = %d\n",i, vet[i]);
		}
		
	}
}

void clearit(int *vet){
	int i;
	for(i = 0; i < 5; i++){
		vet[i] = INT_MAX;
	}	
}

void completepar( int num, int *vet, int *a ){	
	int i = *a;
	vet[i] = num;
	i++;
		
	if(i == 5)
	{
		exibirpar(vet);
		*a = 0;
		clearit(vet);
	}else
	{
		*a = i;
	}
}

void completeimpar( int num, int *vet, int *a ){	
	int i = *a;
	vet[i] = num;
	i++;
		
	if(i == 5)
	{
		exibirimpar(vet);
		*a = 0;
		clearit(vet);
	}else
	{
		*a = i;
	}
}

int main(void){
	
	int i, num, par[5], impar[5], a, b, npar, nimp;
		
	a = b = npar = nimp = 0;
	for(i = 0; i < 15; i++){
		fscanf(stdin, "%d", &num );
		if(i <= 10){
			if(num % 2 == 0){
				completepar(num, par, &a);
			}
			else{
				completeimpar(num, impar, &b);
			}			
		}
		else
		{
			if(num % 2 == 0){
				completepar(num, par, &a);
				npar++;
			}
			else
			{
				completeimpar(num, impar, &b);
				nimp++;
			}
		}			
	}
		
	if(nimp > 0){
		exibirimpar(impar);
	}
	
	if(npar > 0){
		exibirpar(par);
	}	
	
	return 0;
}
