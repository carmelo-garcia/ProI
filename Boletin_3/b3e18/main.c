#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool esletra(char l){
    if (((l >= 'a') && (l<= 'z'))||((l>= 'A') && (l <= 'Z')))
        return true;
    else
        return false;
}
bool esdigito(char n){
    if ((n >= '0') && (n <= '9'))
        return true;
    else
        return false;
}
int main() {
    const int tam=50;

    char cadena[tam];
    int letras=0,numeros=0;

    printf("teclee una cadena de caracteres: ");
    scanf("%s",cadena);
    for (int i = 0; i < strlen(cadena); ++i) {
        if (esletra(cadena[i]))
            letras++;
        if (esdigito(cadena[i]))
            numeros++;
    }
    printf("el numero de letras es: %d y el numero de digitos es %d\n"letras,numeros);
    return 0;
}
