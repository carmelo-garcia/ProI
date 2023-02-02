#include <stdio.h>

int main() {
    int l1,l2,l3;

    printf("Introduzca uno de los lados del triangulo:\n");
    scanf("%d",&l1);
    printf("Introduzca el segundo lado del triangulo:\n");
    scanf("%d",&l2);
    printf("Introduzca el tercer lado del triangulo:\n");
    scanf("%d",&l3);

    if (l1 == l2){

        if (l2 == l3) {
            printf("El triangulo en cuestion es equilatero,ya que sus lados son iguales \n");
        } else {
            printf("El triangulo en cuestion es isosceles, ya que solo dos de sus lados son iguales\n");
        }
    }
    else {
        if (l1 == l3) {
            printf("El triangulo en cuestion es isosceles, ya que unicamente coinciden dos de sus lados\n");
        } else if (l2 == l3) {
            printf("El triangulo en cuestion es isosceles, ya que solo dos de sus lados coinciden\n");
        } else {
            printf("El triangulo en cuestion es escaleno, ya que ninguno de sus lados coinciden\n");
        };
    }

}
