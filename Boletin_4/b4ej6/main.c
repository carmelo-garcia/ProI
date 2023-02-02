#include <stdio.h>
#define HORAS 24
#define DIAS 7

void leer(float grados[][HORAS]);
void temph(float grados[][HORAS]);
void tempd(float grados[][HORAS]);
float temps(float grados[][HORAS]);

int main() {
    float temperaturas[DIAS][HORAS];
    float medias;

    leer(temperaturas);
    temph(temperaturas);
    tempd(temperaturas);
    medias= temps(temperaturas);
    printf("la media semanal es %.2f\n",medias)

}
void leer(float grados[][HORAS]){
    int i;
    for (i = 0; i < DIAS ; ++i) {
        for (int j = 0; j < HORAS; ++j) {
            printf("introduzca los grados en la %da hora del dia %d:\n",j,i+1);
            scanf("%f",&grados[i][j]);
            printf("\n");
        }
    }
}
void temph(float grados[][HORAS]){
    float temp;
    for (int i = 0; i < HORAS; ++i) {
        temp=0;
        for (int j = 0; j <DIAS ; ++j) {
            temp+=grados[j][i];
        }
        temp/=DIAS;
        printf("la media para la hora %d fue de: %2.f\n",i,temp);
    }
}
int tempd(float grados[][HORAS]){
    float temp;
    for (int i = 0; i < DIAS; ++i) {
        temp=0;
        for (int j = 0; j <HORAS ; ++j) {
            temp+=grados[i][j];
        }
        temp/=DIAS;
        printf("la media para el dia %d fue de: %2.f\n",i,temp);
    }
}
int temps(float grados[]){
    float temp=0;
    for (int i = 0; i < DIAS; ++i) {
        for (int j = 0; j <HORAS ; ++j) {
            temp+=grados[i][j];
        }
    }
    temp/=(HORAS*DIAS);
    return temp;
}