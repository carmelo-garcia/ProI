#include <stdio.h>
void leer(int TAM,int matriz[TAM][TAM]);
int comprobar(int TAM,matriz[TAM][TAM]);
int main() {
    int N;
    int a;
    printf("introduzca el tamaño de la matriz:\n");
    scanf("%d",&N);
    int matriz[N][N];
    leer(N,matriz[N][N]);
    a= comprobar(N,matriz[N][N]);
    if (a==1)
        printf("es un cuadrado magico\n");
    else
        printf("no es un cuadrado magico\n");

    return 0;
}
void leer(int TAM,int matriz[TAM][TAM]){
    for (int i = 0; i < TAM; ++i) {
        for (int j = 0; j < TAM; ++j) {
            printf("introduzca el valor en (%d,%d):\n",i,j);
            scanf("%d",matriz[i][j]);
        }
    }
}
int comprobar(int TAM,matriz[TAM][TAM]){
    int sumfilas;
    for (int i = 0; i < TAM; ++i) {
        for (int j = 0; j < TAM; ++j) {
            sumfilas+=matriz[i][j];
        }
    }
    int sumcolumnas;
    for (int k = 0; i < TAM; ++i) {
        for (int j = 0; j < TAM; ++j) {
            sumcolumnas+=matriz[j][k];
        }
    }
    int sumdiagonal;
    for (int l = 0; i < TAM; ++i) {
        int j=0;
        sumdiagonal+=matriz[l][j];
        j++;
    }
    if (sumcolumnas == sumfilas && sumdiagonal == sumfilas)
        return 1;
    else
        return 0;
}
