#include <stdio.h>
#include <stdlib.h>


unsigned long long int wibonacci(int n ){
	
	int cont = 0;
	unsigned long long int ant, pos, next;
	cont = ant = 0;
	pos = 1;
	
	while(cont < n){
		
		next = ant + pos;
		ant = pos;
		pos = next;
    	cont++;
	}

  return ant;
}

unsigned long long int ffibonacci( int n ){
	int i;
	unsigned long long int ant, pos, prox;
	
	for(i = 0; i < n ; i++){
		
		if(i < 2){
			ant = 0;
			pos = 1;
			prox = ant + pos;
						
		}else{
			ant = pos;
			pos = prox;
			prox = ant + pos;			
		}	
	}	
	return prox;
}

int rfibonacci( int n ){
	
	if(n <= 1){
		return n;
	}
	else{
		return (rfibonacci(n-2) + rfibonacci(n-1));
	}	
}


int main(void){
	int t, n, i, *v;
	unsigned long long int *f;
	scanf("%d", &t);
	
	v = (int *) malloc(t * sizeof(int));	
	f = (unsigned long long int *) malloc(t * sizeof(unsigned long long int));
	
	for(i = 0; i < t; i++){
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < t; i++){
		f[i] = ffibonacci(v[i]);
	}
	
	for(i = 0; i < t; i++){
		printf("Fib(%d) = %lli\n", v[i], f[i] );
	}
	
	free(v);
	free(f);
	
	return 0;
}

