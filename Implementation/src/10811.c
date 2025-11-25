#include <stdio.h>

int main() {
    int n,m;
    int i,j;
    scanf("%d %d", &n, &m);

    int number[100] = {0};
    int tmp;

    for(int a = 0; a < n; a++) {
        number[a] = a+1;
    }

    for(int b = 0; b < m; b++) {
        scanf("%d %d", &i, &j);
        for(int c = i-1; c < j; c++) {
            tmp = number[c];
            number[c] = number[j-1];
            number[j-1] = tmp;
            j--;
        }
    }

    for(int d=0; d < n; d++) {
        printf("%d ", number[d]);
    }



}