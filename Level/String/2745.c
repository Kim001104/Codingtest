#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int b;
    char n[100001];
    scanf("%s %d", n, &b);

    int result = 0;

    int len = strlen(n);

    for(int i = 0; i < len; i++) {
        int digit;
        if(n[i] >= '0' && n[i] <= '9') {
            digit = n[i] - '0';
        } else if(n[i] >= 'A' && n[i] <= 'Z') {
            digit = n[i] - 'A' + 10;
        }

        result += digit * pow(b, len-i-1);
    }

    printf("%d", result);


    return 0;
}