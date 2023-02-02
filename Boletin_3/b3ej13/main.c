#include <stdio.h>
#include <math.h>
int valorx;
int pol();
int solinfo();
int main() {
    solinfo();
    pol(valorx);
}
int solinfo(){
    printf("introduzca el valor de x para la funcion:");
    scanf("%d",&valorx);
}
int pol(){
    int x,y;
    x = valorx;
    y = 3 * pow(x, 5) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - pow(x, 2) + (7 * x) - 6;
    printf("%d",y);

}