#include <stdio.h>
long int fibonacci(int num) {
    if (num < 2)
        return num;
    else
        return (fibonacci(num - 1) + fibonacci(num-2));

    }
int main() {
    int n;


    return 0;
}
