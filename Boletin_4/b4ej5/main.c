#include <stdio.h>
const int HORAS=24;
void leer(float grados[]);
float media(float grados[]);
int maximo(float grados[]);
int minimo(float grados[]);

int main() {
    int max,min;
    float med;
    float estudio[HORAS];
    leer(estudio);
    min = minimo(estudio);
    max = maximo(estudio);
    med = media(estudio);
    printf("la temperatura media es %2.f , la maxima es %d y la minima es %d",med,max,min);
    return 0;
}
void leer(float grados[]){
    int i;
    for (i = 0; i < HORAS ; ++i) {
        printf("introduzca los grados en la %da hora del dia:\n",i+1);
        scanf("%f",&grados[i]);
    }
}
float media(float grados[]){
    int sum;
    int i;
    for (i = 0; i < HORAS ; ++i) {
        sum+= grados[i];
    }
    return (sum/HORAS);
}
int maximo(float grados[]){
    int control;
    control = 100;
    int i;
    for (i = 0; i < HORAS; ++i) {
        if (grados[i]< control)
            control = grados[i];
    }
    return control;
}
int minimo(float grados[]){
    int control;
    control = -50;
    int i;
    for (i = 0; i < HORAS; ++i) {
        if (grados[i] > control)
            control = grados[i];
    }
    return control;
}