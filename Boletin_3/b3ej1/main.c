#include <stdio.h>
int n;
void blanco(n){
    int i;
    for ( i = 0; i <= n ; ++i) {
        printf("\n");
    }
}
int main() {
    printf("introduzca un numero de lineas a rellenar en blanco: ");
    scanf("%d",&n);
    printf("{");
    blanco(n);
    printf("}");
    return 0;
}
