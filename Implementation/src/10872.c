/*
    팩토리얼 : 재귀 함수
    
    문제 : 0보다 크거나 같은 정수 N이 주어진다면 이때 n!을 출력하시오

    입력: 정수 N이 주어짐

    출력: N!가 주어짐
*/

int factorial(int n){
    if(n==1){
        return 1;
    } else

    return n * factorial(n-1);
}

#include <stdio.h>

int main() {
    int n, result=1;
    scanf("%d", &n);


    result = factorial(n);
    printf("%d", result);
    return 0;
}