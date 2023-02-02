#include <stdio.h>

int main() {
    int n1; int n2;int n3; int mayor;int menor;int cociente;int resto;

    printf("introduzca un numero entero y positivo:");
    scanf("%d",&n1);
    printf("introduzca un numero entero y positivo:");
    scanf("%d",&n2);
    printf("introduzca un numero entero y positivo:");
    scanf("%d",&n3);

    if (n1 > n2)
        if (n2 > n3) {
            mayor = n1;
            menor = n3;
        } else if (n3 > n1) {
            mayor = n3;
            menor = n2;
        } else {
            mayor = n1;
            menor = n2;
        }
    else if (n3 > n2)
        if (n2 > n1) {
            mayor = n3;
            menor = n1;
        } else if (n1 > n3) {
            mayor = n1;
            menor = n2;
        } else {
            mayor = n3;
            menor = n2;
        }
    else if (n1 > n3) {
        mayor = n2;
        menor = n3;
    } else {
        mayor = n2;
        menor = n1;
    }

    printf("%d dividido | entre %d\n",mayor,menor);
    cociente = mayor / menor;
    resto = mayor % menor;
    printf("R:%d  C:%d\n",resto,cociente);
    return 0;
}