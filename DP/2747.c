/*
    n= 17의 피보나치 수
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
    n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성

    입력: 첫째줄 n <=45
    출력: n번째 피보나치 수
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int result[100] = {0,1};

    for(int i=2; i <=n; i++) {
        result[i] = result[i-2] + result[i-1];
    }

    printf("%d\n", result[n]);
    return 0;
}
