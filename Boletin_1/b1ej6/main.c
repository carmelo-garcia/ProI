#include <stdio.h>

int main() {

    float radio, volumen, area;

    printf("introduzca el radio de la esfera:");
    scanf("%f",&radio);
    area = 4*3.14*(radio*radio);
    volumen = 4/3*3.14*(radio*radio*radio);

    printf("el area de la esfera con radio %f es %f y su volumen es %f\n",radio,area,volumen);
}
