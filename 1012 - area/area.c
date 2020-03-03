#include <stdio.h>

double areadotrianguloretangulo( double baseA, double alturaC  ){
    return ((baseA * alturaC) / 2.0 );
}

double areadocirculo( double raioC ){
    return ( 3.14159 * raioC * raioC);
}

double areadotrapezio( double baseA, double baseB, double alturaC )
{
    return (((baseA + baseB) * alturaC ) / 2.0 );
}

double areadoquadrado( double ladoB )
{
    return (ladoB * ladoB);
}

double areadoretangulo( double ladoA, double ladoB )
{
    return (ladoA * ladoB);
}

int main(void)
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("TRIANGULO: %.3lf\n", areadotrianguloretangulo(a, c) );
    printf("CIRCULO: %.3lf\n", areadocirculo(c) );
    printf("TRAPEZIO: %.3lf\n", areadotrapezio(a, b, c) );
    printf("QUADRADO: %.3lf\n", areadoquadrado(b) );
    printf("RETANGULO: %.3lf\n", areadoretangulo(a, b) );
    return 0;
}
