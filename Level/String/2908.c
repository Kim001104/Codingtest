#include <stdio.h>

/*
3자리 수 정수 입력 두개를 받고, 이것을 거꾸로 봐야함(배열인가?) 그리고 나서 대수 비교 해야함. 
*/
int reversed(int n){
    int result;
    result = n/100 + ((n/10)%10) * 10 + (n%10) * 100; 
    return result;
}

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    n1 = reversed(n1);
    n2 = reversed(n2);

    if(n1 < n2) printf("%d\n", n2);
    else printf("%d\n", n1);
    
    return 0;
}