#include <stdio.h>
const int TAM=7;
const int LON=40;

void leer (char nombre[][LON]);
void amosar(char nombre[][LON]);


int main() {
    char animales[TAM][LON];

    leer(animales);
    amosar(animales);

    return 0;
}
void leer (char nombre[][LON]){
    int i;
    for ( i = 0; i < TAM; ++i) {
        printf("Escriba el nombre de un animal:\n");
        scanf("%s",nombre[i]);

    }
}
void amosar(char nombre[][LON]){
    int i;
    printf("\n");
    for ( i = 0; i < TAM; ++i) {
        printf("%s\n",nombre[i]);

    }
}