#include <stdio.h>
int main() {

    char apellido[30];
    int  edad;
    int jubilacion;

    printf("introduzca su apellido\n");
    scanf("%s",&apellido);
    printf("cuantos años tiene?\n");
    scanf("%d",&edad);

    jubilacion = 67 - edad;
    printf(" Sr/Sra. %s le quedan %d años para su jubilacion\n",apellido,jubilacion);
    return 0;
}
