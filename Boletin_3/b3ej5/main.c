#include <stdio.h>
int tamano;
int triangulo();
int main() {
    printf("introduzca el tamano del triangulo de floyd");
    scanf("%d",&tamano);
    printf("%d",triangulo(tamano));
}
int triangulo(){
    int i, j, k;
    k = 1;
    for (i = 1; tamano >= i; ++i) {
        for (j = k; j <= k+i-1; ++j) {
            printf("%i",j);
        }
        printf("\n");
        k = k+i;
    }
}