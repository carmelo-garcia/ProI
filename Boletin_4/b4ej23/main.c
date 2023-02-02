#include <stdio.h>
#define long 10
#define long2 20
void sol(char array[long]);
void copiar_arrays(char array[long],char array2[long],char arraytemporal[long2]);
void ordenar(char arraytemporal[long2]);
void mostrar(char array[long2]);
int main() {
    char caracteres1[long];
    char caracteres2[long];
    char arraytemp[long2];
    printf("primer array:\n");
    sol(caracteres1);
    printf("segundo array:\n");
    sol(caracteres2);
    copiar_arrays(caracteres1,caracteres2,arraytemp);
    ordenar(arraytemp);
    mostrar(arraytemp);
    return 0;
}
void sol(char array[long]){
    int i=0;
    while(i != long) {
        scanf("%c", &array[i]);
        i++;
    }
}
void copiar_arrays(char array1[long],char array2[long],char arraytemporal[long2]){
    for (int i = 0; i <= long; ++i) {
        arraytemporal[i]=array1[i];
    }
    for (int j = 0; j <= long; ++j) {
        arraytemporal[10+j]=array2[j];
    }

}
void ordenar(char arraytemporal[long2]){
    char temp=0;
    for (int i=1;i< (long2);i++)
    {
        for (int j=0;j<(long2)-1;j++)
        {
            if (arraytemporal[j] > arraytemporal[j+1])
            {
                temp = arraytemporal[j];
                arraytemporal[j]=arraytemporal[j+1];
                arraytemporal[j+1]=temp;
            }
        }
    }
    }
void mostrar(char arraytemporal[long2]){
    for (int i = 0; i < (long2); ++i) {
        printf("\t%c",arraytemporal[i]);
    }
}