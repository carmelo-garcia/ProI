#include <stdio.h>

void leer(int TAM, int matriz1[TAM][TAM]);
void mostrar(int TAM, int matriz1[TAM][TAM]);
void suma(int TAM, int matriz1[TAM][TAM], int matriz2[TAM][TAM], int matriz3[TAM][TAM]);
void resta(int TAM, int matriz1[TAM][TAM], int matriz2[TAM][TAM], int matriz3[TAM][TAM]);
void producto(int TAM, int matriz1[TAM][TAM], int matriz2[TAM][TAM], int matriz3[TAM][TAM]);
int main() {
    int n,opcion;
    printf("introduzca el tamaño de la matriz:\n");
    scanf("%d",&n);
    int matriz1[n][n],matriz2[n][n],matriz3[n][n];
    printf("introduzca la matriz 1\n");
    leer(n,matriz1);
    printf("introduzca la matriz 2\n");
    leer(n,matriz2);
    printf("1.suma las matrices\n");
    printf("2.resta las matrices\n");
    printf("3.producto las matrices\n");
    scanf("%d",&opcion);
    switch (opcion) {
        case 1:
            suma(n,matriz1,matriz2,matriz3);
            break;
        case 2:
            resta(n,matriz1,matriz2,matriz3);
            break;
        case 3:
            producto(n,matriz1,matriz2,matriz3);
            break;
    }
    mostrar(n,matriz3);
    return 0;
}
void leer(int TAM, int matriz1[TAM][TAM]){
    int i;
    for (i = 0; i < TAM; ++i) {
        int j;
        for (j = 0; j < TAM; ++j) {
            printf("introduzca posicion (%d,%d) de la matriz:\n",i,j);
            scanf("%d",&matriz1[i][j]);
        }
    }
}
void mostrar(int TAM, int matriz1[TAM][TAM]){
    int i;
    for (i = 0; i < TAM; ++i) {
        int j;
        for (j = 0; j < TAM; ++j) {
            printf("%4d",matriz1[i][j]);
        }
        printf("\n");
    }
}
void suma(int TAM, int matriz1[TAM][TAM], int matriz2[TAM][TAM], int matriz3[TAM][TAM]){
    int i;
    for (i = 0; i < TAM; ++i) {
        int j;
        for (j = 0; j < TAM; ++j) {
            matriz3[i][j]=matriz1[i][j] + matriz2[i][j];
        }
    }
}
void resta(int TAM, int matriz1[TAM][TAM], int matriz2[TAM][TAM], int matriz3[TAM][TAM]){
    int i;
    for (i = 0; i < TAM; ++i) {
        int j;
        for (j = 0; j < TAM; ++j) {
            matriz3[i][j]=matriz1[i][j] - matriz2[i][j];
        }
    }
}
void producto(int TAM, int matriz1[TAM][TAM], int matriz2[TAM][TAM], int matriz3[TAM][TAM]){
    int i;
    int sum;
    for (i = 0; i < TAM; ++i) {
        int j;
        for (j = 0; j < TAM; ++j) {
            matriz3[i][j]+= (matriz1[i][j] * matriz2[j][i]);
        }
    }
}