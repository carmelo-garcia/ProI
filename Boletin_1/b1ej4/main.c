#include <stdio.h>

int main() {
    float base;
    float altura;
    float perimetro;

    printf("introduzca la base del rectangulo:");
    scanf("%f",&base);
    printf("indique la altura del rectangulo:");
    scanf("%f",&altura);
    perimetro = (2*base) + (2*altura);
    printf("el perimetro del rectangulo de base %3.2f y altura %3.2f es %3.2f\n",base,altura,perimetro);

}