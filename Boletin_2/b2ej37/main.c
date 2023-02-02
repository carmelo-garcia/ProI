#include <stdio.h>

int main() {
   int n,cont,a = 0, b=1,c;
    printf("longitud de la serie de fibonacci:\n");
    scanf("%d",&n);
    for (cont = 0;cont < n-2 ;cont ++)
    {
        c = a + b;
        printf("%d\n",c);
        a = b;
        b = c;
    }
    return 0;
}
