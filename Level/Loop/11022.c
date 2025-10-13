#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    int a,b,c;

    for(int i=1; i <= T; i++) {
        scanf("%d %d", &a, &b); 
        c = a + b;
        printf("Case #%d: %d + %d = %d\n", i, a, b,c);
    }
}