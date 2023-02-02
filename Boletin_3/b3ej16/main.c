#include <stdio.h>
void esdigito(char c);
void esdigito(char c){
    if(c == '1' || c ==  '2' || c == '3' || c == '4' || c == '5' ||c == '6' || c ==  '7' || c == '8' || c == '9' || c == '0')
        printf("Digito");
    else printf("No es digito");
}
int main() {
    char c;
    printf("Introduzca un caracter\n");
    scanf("%c",&c);
    esdigito(c);
    return 0;
}
