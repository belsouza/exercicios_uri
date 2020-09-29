#include <stdio.h>
#include <stdlib.h>

void primeiravisita(int *si, int e, int *ci , int q ){
	int i, j, temp, index;
	for(i = 0; i < q; i++ ){
		
		temp =  ci[i];
		index = i;
		
		for(j = 0; j < e; j++){
			if(temp == si[j])
			{
				ci[index] = 0;
			}
		}
	}
}



int main(void){
	
	int q, e, *si, *ci, i, temp, j;
	FILE *fp = fopen("debug.txt","r");
	fscanf(fp, "%d  %d", &q, &e);
	
	si = (int *) calloc(e, sizeof(int)); //100
	ci = (int *) calloc(q, sizeof(int)); //1000
	
	for(i = 0; i < e; i++){		
		fscanf(fp, "%d", &temp);
		si[i] = temp;
	}
	
	for(i = 0; i < q; i++){
		fscanf(fp, "%d", &temp);
		ci[i] = temp;		
	}
	
	primeiravisita(si, e, ci, q);
			
	for(i = 0; i < q; i++){
		temp = ci[i];
		if((ci[i] != 0) && (ci[i] != 1))
		ci[i] = 1;
		for(j = i; j < q; j++){
			if(ci[j] == temp){
				ci[j] = 0;
			}
		}
	}
	
	for(i = 0; i < q; i++){
		printf("%d \n", ci[i]);				
	}
	
	free(si);
	free(ci);
	
	return 0;
	
}
