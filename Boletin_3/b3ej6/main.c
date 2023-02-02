#include <stdio.h>
int tamano;
int triangulo();
int solinfo();
int main() {
    solinfo();
    printf("%d",triangulo(tamano));
}
int solinfo(){
    printf("introduzca el orden n del triangulo de floyd");
    scanf("%d",&tamano);
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