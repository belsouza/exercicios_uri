#include <stdio.h>

double consumo(int x, float y)
{
	return ( (float)x / y);
}

int main(void)
{
	int x;
	float y;
	scanf("%d", &x);
	scanf("%f", &y);
	printf("%.3lf km/l\n", consumo(x,y));
	return 0;
}
