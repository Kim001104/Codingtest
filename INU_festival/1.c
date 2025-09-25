#include <stdio.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


int main() {
    int a=1, b=1;   //a:칭찬, b:비난
    int n;
    scanf("%d", &n);
    int g_a, g_b;
    scanf("%d %d", &g_a, &g_b); //양파 자라나는 길이

    for (int i = 1; i <= n; i++)
    {
        a += g_a;
        b += g_b;

        if(a < b){
            swap(&a, &b);
        } else if(a==b) {
            b -= 1;
        }
    }
        
    printf("%d %d", a, b);
}