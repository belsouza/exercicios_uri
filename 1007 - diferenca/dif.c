#include <stdio.h>

int dif( int a, int b, int c, int d){
    return ((a * b) - (c * d));
}

int main(void)
{
    int a, b, c, d, diferenca;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    diferenca = dif(a, b, c, d);
    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}