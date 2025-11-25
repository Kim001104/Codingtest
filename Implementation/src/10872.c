#include <stdio.h>

int fact(int number) {
    if(number > 1) return number * fact(number-1);
    else return 1;
}

int main() {
    int n; 
    scanf("%d", &n);
    // int result = fact(n);
    printf("%d", fact(n));
    return 0;
}