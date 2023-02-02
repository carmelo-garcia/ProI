#include <stdio.h>
char dia(char d);

int main() {
    char d;
    printf("introduzca la inical del dia de la semana, en mayuscula, por favor:");
    scanf("%d",d);
    printf("%d",dia(d));
    return 0;
}
char dia(char d){
    switch (d) {
        case 'l':
            printf("Lunes\n");
            break;
        case 'm':
            printf("Martes\n");
            break;
        case 'x':
            printf("Miércoles\n");
            break;
        case 'j':
            printf("Jueves\n");
            break;
        case 'v':
            printf("Viernes\n");
            break;
        case 's':
            printf("Sábado\n");
            break;
        case 'd':
            printf("Domingo\n");
            break;
        default:
            printf("No es un dia de la semana\n");
            break;
    }
}