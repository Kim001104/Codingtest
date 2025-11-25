#include <stdio.h>

int fibo(int number) {
    if(number >= 2) return fibo(number-1) + fibo(number-2);
    else if(number == 1) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));

    return 0;
}