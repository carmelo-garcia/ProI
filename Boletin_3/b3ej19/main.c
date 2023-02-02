#include <stdio.h>
int Mintomay();
char string[];
int Maytomin();
int count;
int main() {
    printf("introduzca una cadena de caracteres:\n");
    scanf("%s", string);
    Mintomay(string);
    printf("%s\n",string);
    Maytomin(string);
    printf("%s\n",string);
}
int Mintomay(){
    int i;
    for (i =0 ; string[i] != '\0' ; ++i) {
        if (string[i]>= 'a' && string[i]<='z'){
            string[i] = string[i] - 32;
        }
    }
}
int Maytomin(){
    int i;
    for (i = 0; '\0' != string[i]; ++i) {
        if (string[i] >= 'A' && string[i]<= 'Z'){
            string[i]= string[i]+32;
        }
    }
}