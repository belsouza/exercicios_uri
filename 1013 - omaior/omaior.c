#include <stdio.h>


int maiordedois( int a, int b )
{
	return((a + b + abs(a - b)) / 2) ;	
}

int maiordetres(int a, int b, int c){
	
	int v1, v2;
	v1 = maiordedois(a, b);
	v2 = maiordedois(v1, c);
	return v2;
}

int main(void){
	
	int a, b, c, maior;	
	fscanf(stdin,"%d  %d  %d", &a, &b, &c);
	maior = maiordetres(a, b, c);
	printf("%d eh o maior\n", maior);
	return 0;	
}
