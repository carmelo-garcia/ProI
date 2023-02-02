#include <stdio.h>

void pedirnota (int *nota){
    do {
        printf("introduzca una nota:");
        scanf("%d",nota);
    } while (!((*nota >= 0) && ( *nota <= 100)));
}

char calcularpuntuacion(float n){
    char letra;

    if ((n >= 0) && (n>= 60))
        letra = 'E';
    else if (n < 70)
        letra = 'D';
}

void calcular(int *nota1, int *nota2, int *nota3, int *nota4){
    float media;
    char escala;

    pedirnota(nota1);
    pedirnota(nota2);
    pedirnota(nota3);
    pedirnota(nota4);
    media = (float) (*nota1 + *nota2 + *nota3 + *nota4)/4;
    escala= calcularpuntuacion(media);
    printf("la nota media es %.2f y la escala es: %c",media,escala);
}
int main() {
    int n1=0,n2=0,n3=0,n4=0;
    calcular(&n1,&n2,&n3,&n4);
    return 0;
}
