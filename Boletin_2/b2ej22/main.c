#include <stdio.h>

int main() {
    int par,impar;
    for (par = 0; par < 100;par = par +(par + 2));
    for (impar = 1; impar < 100;impar = impar +(impar + 2));
    printf("%d  %d\n", par,impar);
}