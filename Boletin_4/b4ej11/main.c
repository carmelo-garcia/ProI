#include <stdio.h>
const int N=10;
int suma(int b[N]);
void sol(int a[N]);
int main() {
    int array[N];
    int sum;
    sol(&array[N]);
    sum = suma(&array[N]);
    printf("%d\n",sum);
}
int suma(int b[N]){
    if (b[0] == NULL) {
        return 0;
    } else
        return (b[N]+ suma(b[N-1]));
}
void sol(int a[]){
    int i;
    for (i = 0; i < N; ++i) {
        printf("introduzca el valor %d:",i+1);
        scanf("%d",&a[i]);
    }
}