#include <stdio.h>
#include <math.h>
const int N=20;
void leer(int a[]);
int conv(int a[]);
int main() {
    int array[N],i;
    leer(array);
    printf("El array inicial:\n");
    for ( i = 0; i < N; ++i) {
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("\n");
    conv(array);
    printf("El array final:\n");
    for ( i = 0; i < N; ++i) {
        printf("%d\t",array[i]);
    }
}
void leer(int a[]){
    int i;
    for (i = 0; i < N ; ++i) {
        printf("valor para la posicion %d:",i+1);
        scanf("%d",&a[i]);
    }
}
int conv(int a[]){
    int i;
    float raiz;
    for (i = 0; i < N ; ++i) {
        if (a[i] % 2 ==0)
            a[i]= a[i]*a[i];
        else
            raiz = sqrt(a[i]),a[i] = (int)raiz;
    }
}