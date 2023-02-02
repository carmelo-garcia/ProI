#include <stdio.h>

int main() {
    float base;
    float altura;
    float superficie;

    printf("introduzca la base del rectangulo:");
    scanf("%f",&base);
    printf("indique la altura del rectangulo:");
    scanf("%f",&altura);
    superficie = base * altura;
    printf("la superficie del rectangulo de base %f y altura %f es %f",base,altura,superficie);

}