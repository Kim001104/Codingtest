#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int number[n];

    for(int i =0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    for(int i =0; i < n-1; i++) {
        for(int j=i+1; j < n; j++) {
            if(number[i] > number[j]) {
                int tmp;
                tmp = number[i];
                number[i] = number[j];
                number[j] = tmp;
            }
        }
    }

    for(int i =0; i < n; i++) {
        printf("%d", number[i]);
    }
    
    return 0;
}