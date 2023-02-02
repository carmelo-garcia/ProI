#include <stdio.h>
void esmayuscula(char c);
int main() {
    char c;
    printf("introduzca una letra\n");
    scanf("%c",&c);
    esmayuscula(c);
    return 0;
}
void esmayuscula(char c){
    if(c == 'A' || c ==  'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Mayuscula");
    else printf("No Mayuscula");

}