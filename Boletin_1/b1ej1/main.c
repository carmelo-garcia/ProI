#include <stdio.h>

int main() {

    int edad;
    char nombre[10];

    printf("introduzca su edad\n");
    scanf("%d",&edad);
    printf("introduzca su nombre\n");
    scanf("%s",&nombre);
    printf("%s tiene %d años\n",nombre,edad);

}
