#include <stdio.h>

int main() {
    int dh,mh,ah,dn,mn,an,dm,m,d,a;
    
    printf("Introduzca la fecha actual en formato dd mm aa:\n");
    scanf("%d %d %d",&dh,&mh,&ah);
    printf("Introduzca su fecha de nacimiento en formato dd mm aa:\n");
    scanf("%d %d %d",&dn,&mn,&an);
    switch (mn) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dm = 31;
            break;
        case 2:
            dm= 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dm = 30;
            break;

        
    }
    if (mn > mh)
        m =12 - (mn - mh)

}
