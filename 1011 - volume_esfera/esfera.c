#include <stdio.h>
#include <stdlib.h>

double vesfera( double r )
{
    return ((4.0 * 3.14159 * r * r * r) / 3.0);
}

int main(void){
    double r, vol;
    fscanf(stdin,"%lf", &r);
    vol = vesfera(r);
    printf("VOLUME = %.3lf\n", vol);
}