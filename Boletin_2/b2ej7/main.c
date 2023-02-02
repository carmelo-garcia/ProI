#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float aux;

    printf("a*x^2 + b*x + c = 0\n");
    printf("Valor del termino a: ");
    scanf("%f", &a);
    printf("Valor del termino b: ");
    scanf("%f", &b);
    printf("Valor del termino c: ");
    scanf("%f", &c);

    aux = powf(b, 2) - 4 * a * c;

    switch ((int) aux) {
        case 0:
            printf("Raiz real doble\n");
            printf("\t%f\n", -b/(2*a));
            break;
        default:
            if (aux > 0) {
                printf("Real y distinta\n");
                printf("\t%f\n", (-b + sqrtf(aux))/(2*a) );
                printf("\t%f\n", (-b - sqrtf(aux))/(2*a) );
            } else {
                printf("Compleja\n");
                printf("\t%f + (%f)i\n", -b/(2*a), sqrtf(-aux)/(2*a) );
                printf("\t%f - (%f)i\n", -b/(2*a), sqrtf(-aux)/(2*a) );
            }
    }


    return 0;
}
