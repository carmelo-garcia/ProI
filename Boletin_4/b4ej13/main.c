#include <stdio.h>
#define tam 4

void solicitar(int m[][tam]);
void mostrar(int m[][tam]);
void maximo(int m[][tam]);
void minimo(int m[][tam]);

int main() {
    int matriz[tam][tam];
    solicitar(matriz);
    mostrar(matriz);
    maximo(matriz);
    minimo(matriz);
}
void solicitar(int m[][tam]){
    int i,j;

    for (i = 0; i < tam; ++i) {
        printf("introduzca la fila %d de la matriz:\n",i);
        for(j = 0; j < tam; ++j){
            scanf("%d",&m[i][j]);
        }
    }
}
void mostrar(int m[][tam]){
    int i,j;
    for (i = 0; i < tam; ++i) {
        for (j = 0; j < tam; j++) {
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void maximo(int m[][tam]){
    int i,j,f,c;
    int max=0;
    for(i=0;i<tam;++i){
        for (j = 0; j <tam; j++) {
            if (m[i][j] > max) {
            max = m[i][j];
            f = i;
            c = j;
            }
        }
    }
    printf("el maximo es %d en la posicion %d x %d\n",max,f,c);
}
void minimo(int m[][tam]){
    int i,j,f,c;
    int minimo=1000;

    for(i=0;i<tam;++i){
        for(j=0;j<tam;j++){
            if(m[i][j]<minimo){
                minimo=m[i][j];
                f=i;
                c=j;
            }
        }
    }

    printf("el minimo es %d en la posicion %d x %d\n",minimo,f,c);
}