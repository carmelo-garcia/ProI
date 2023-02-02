#include <stdio.h>
const int N=6;

void leer(int a[]);
int mostrar(int d,int a[]);

int main() {
    int array[N];
    int num;
    int contador;
    leer(array);
    printf("indique el numero que desea buscar:\n");
    scanf("%d",num);
    mostrar(num, array[N]);


}
void leer(int a[]){
    int i;
    for (i = 0; i < N ; ++i) {
        printf("valor para la posicion %d:",i+1);
        scanf("%d",&a[i]);
    }
}
int mostrar(int d,int a[]){
    int i,c;
    c=0;
    for (i = 0;i< N ; i++) {
        if (a[i] == d)
            c++;
        else;
    }
    return c;
}
