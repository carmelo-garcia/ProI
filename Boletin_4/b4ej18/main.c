#include <stdio.h>
void solicitar(int n,int matriz[n][n]);
int mostrar(int n,int matriz[n][n]);
int puntosilla(int n, int matriz[n][n]);
int main() {
}
void solicitar(int n,int matriz[n][n]){
    int i;
    for (i = 0; i < n; ++i) {
        int j;
        for (j = 0; j < n; ++j) {
            printf("introducir el valor para posicion (%d,%d)",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
}
int mostrar(int n,int matriz[n][n]){
    int i;
    for (i = 0; i < n; ++i) {
        int j;
        for (j = 0; j < n; ++j) {
            printf("%4d",matriz[i][j]);
        }
    }
}
int puntosilla(int n, int matriz[n][n]){
    for (int i = 0; i < ; ++i) {
        
    }
}