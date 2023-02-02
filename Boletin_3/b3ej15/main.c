#include <stdio.h>
#include <stdbool.h>
char c;
void Esvocal(char c);

void Esvocal(char c){
    if(c == 'A' || c ==  'E' || c == 'I' || c == 'O' || c == 'U' ||c == 'a' || c ==  'e' || c == 'i' || c == 'o' || c == 'u')
        printf("Vocal");
    else printf("No es vocal");
}

int main() {
    printf("introduzca una letra cualquiera y el programa diferenciara si es vocal o no\n");
    scanf("%c",&c);
    Esvocal(c);
}