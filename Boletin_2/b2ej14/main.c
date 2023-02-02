#include <stdio.h>

int main() {
    int n1,n2,resultado;

    printf("Introduzca un numero entero de 3 cifras\n");
    scanf("%d",&n1);

    if (n1 < 100 || n1 > 999)
    {
        printf("Error, el numero introducido no tiene 3 cifras o no es positivo");
        return 0;
    }
    else {}

    printf("Introduzca un numero entero de 1 cifra:\n");
    scanf("%d",&n2);

    if (n2 < 0 || n2 > 10)
    {
        printf("Error,el numero introducido no tiene 1 cifra o no es positivo");
        return 0;
    }
    else {}

    resultado = n1 * n2;

    printf("%-d\n",n1);
    printf("x %-d\n",n2);
    printf("========\n");
    printf("%d",resultado);
    return 0;
}
