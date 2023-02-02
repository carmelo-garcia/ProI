#include <stdio.h>
#include <math.h>
int main() {
    int option,inicio,j,final,num,i,k,cuadrado,raiz;
    printf("1-Visualizar una tabla de los numeros, los cuadrados y sus raíces cuadradas de n intervalo de numeros\n");
    printf("2-Visualizar divisores del numero indicado\n");
    printf("3-Salir\n");
    scanf("%d",&option);

    switch (option) {
        case 1:
            printf("Introduzca el intervalo de numeros:\n");
            scanf("%d,%d",&inicio,&final);
            printf("%d,%d\n",inicio,final);

            for ( i = inicio; i <= final ; ++i) {
                printf("   %-d   ",i);
            }
            printf("\n");
            for (j = inicio ; j <= final ; j++) {
                cuadrado = j*j;
                printf("   %-d   ",cuadrado);
            }
            printf("\n");
            for (k = inicio; k <= final ; ++k) {
                raiz = sqrt(k);
                printf("   %-d   ",raiz);
            }
            break;
        case 2:
            printf("indique un numero:\n");
            scanf("%d",&num);
    }
    return 0;
}

