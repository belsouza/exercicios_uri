#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void ehmenor( int *vet, int tam, int *menor, int *index){
	int i, temp = INT_MAX, reg = 0;
	for(i = 0; i < tam; i++){
		if(vet[i] < temp){
			temp = vet[i];
			reg = i;
		}
	}
	
	*menor = temp;
	*index = reg;
}

int main(void){
	
	int i, menor, n, *vet, index;
	fscanf(stdin, "%d", &n);
	
	vet = (int *) calloc (n, sizeof(int));
	for(i = 0; i < n; i++){
		fscanf(stdin, "%d", &vet[i]);
	}	
	
	ehmenor(vet, n, &menor, &index );
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", index);
	
	free(vet);
	return 0;
	
}
