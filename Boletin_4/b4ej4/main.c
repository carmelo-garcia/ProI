#include <stdio.h>
#define DAY 7

void solicitar(int array[]);
void mostrar(int array[]);
int maximo(int array[]);
int minimo(int array[]);
float media(int array[]);

int main() {
    int semana[DAY];
    solicitar(&semana[DAY]);
    mostrar(&semana[DAY]);
    printf("el numero de horas estudiadas de media es %2f, el dia que mas se estudio es el dia %d y el que menos %d\n",
           media(&semana[DAY]), maximo(&semana[DAY]), minimo(&semana[DAY]));
    return 0;
}


void solicitar(int array[]){
    int i;
    for (i = 0; i < DAY; ++i) {
        printf("indique cuantas horas estudio el dia %d:\n",i+1);
        scanf("%d",&array[i]);
    }
}
void mostrar(int array[]){
    int i;
    for ( i = 0; i < DAY; ++i) {
        printf("%4d",array[i]);
    }
    printf("\n");
}
int maximo(int array[]){
    int dia = 0;
    int horas = 0;
    int i;
    for ( i = 0; i < DAY; ++i) {
        if(array[i]>horas){
            dia = i;
            horas = array[i];
        }
    }
    return dia+1;
}
int minimo(int array[]){
    int dia = 0;
    int horas = 24;
    int i;
    for (i = 0; i < DAY; ++i) {
        if(array[i] < horas){
            dia = i;
            horas = array[i];
        }
    }
    return dia+1;
}

float media(int array[]){
    float sumatorio=0;
    float media=0;
    int i;
    for(i=0; i<DAY;i++){
        sumatorio+=array[i];
    }
    media= sumatorio/DAY;
    return media;
}