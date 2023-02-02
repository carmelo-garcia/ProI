#include <stdio.h>

int main() {
    float nivel,preguntas,aciertos;

    printf("indique el numero de preguntas del test:\n");
    scanf("%f",&preguntas);
    printf("indique el numero de aciertos:\n");
    scanf("%f",&aciertos);
    nivel = (aciertos/preguntas) * 100;
    printf("%f\n",nivel);
    if (nivel> 90.0)
        printf("usted tiene un nivel maximo\n");
    else if (nivel>= 75.0 && nivel<90.0)
        printf("usted tiene un nivel medio\n");
    else if (nivel>=50.0 && nivel<75.0)
        printf("usted tiene un nivel regular\n");
    else if (nivel<50.0)
        printf("usted no tiene nivel\n");

}