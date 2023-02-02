#include <stdio.h>
void leer(int N,int matrizo[N][N]);
int intercambiar(int N,int matrizo[N][N],char opcion,int inicial,int final);
void mostrar(int N,int matrizo[N][N]);
void asignar(int N,int matrizo[N][N],int matrizf[N][N]);
int main() {
    int matriz[N][N];
    char opcion;
    leer(matriz);
    mostrar(matriz);
    printf("¿que desea cambiar,fila f o columna c?\n");
    scanf("%c",&opcion);
    if (opcion == 'c')
        intercambiar(matriz);
    else
        intercambiar(matriz);
    mostrar(matriz);
    return 0;
}
void leer(int matriz[][COLUMNAS]){
    int i;
    for (i = 0; i < FILAS; ++i) {
        int j;
        for (j = 0; j < COLUMNAS; ++j) {
            printf("introduzca el valor %d de la columna %d:\n",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
}
int intercambiarfila(int matriz[][COLUMNAS]){
    for (int i = 0; i < ; ++i) {

    }
}
int intercambiarcolumna(int matriz[][COLUMNAS]){
    for (int i = 0; i < ; ++i) {

    }
}
void mostrar(int matriz[][COLUMNAS]){
    int i;
    for (i = 0; i < FILAS; ++i) {
        int j;
        for (j = 0; j < COLUMNAS; ++j) {
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }
}