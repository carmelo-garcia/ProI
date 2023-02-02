#include <stdio.h>

int main() {
    int paridad,resto,num;
    printf("Piense un numero del 1 al 10...\n");
    printf("El numero que ha pensado es impar (1) o par(2)\n");
    scanf("%d",&paridad);
    printf("Cual es el resto de dividir el numero entre 5\n");
    scanf("%d",&resto);

    if (paridad == 2) {
        switch (resto) {
            case 0:
                num = 10;
                break;
            case 1:
                num = 6;
                break;
            case 2:
                num = 2;
                break;
            case 3:
                num = 8;
                break;
            case 4:
                num = 4;
                break;
        }
    } else
    {
        switch (resto)
        {
            case 0:
                num = 5;
                break;
            case 1:
                num = 1;
                break;
            case 2:
                num = 7;
                break;
            case 3:
                num = 3;
                break;
            case 4:
                num = 9;
                break;
        }
    }

    printf("%d es el numero que habia pensado\n",num);

}
