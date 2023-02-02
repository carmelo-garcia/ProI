#include <stdio.h>
int num;
int primo();
int main() {
    printf("introduzca un numero:\n");
    scanf("%d",&num);
    primo(num);
}
int primo(){
    int i,a;
    a=0;
    for(i=1;i<=num;i++){
        if(num%i==0)
            a++;
    }
    if(a==2){
    printf("El numero es primo");
    } else{
    printf("El numero no es primo");
    }


}
