#include <stdio.h>
/*
    반복문에서 !=를 사용해서 반복을 한다면 조건과 같지 않을 때 까지 반복 즉 같게 된다면 반복문 탈출
    반대로 ==를 사용한다면 같을때만 반복하는 것이기 때문에 같지 않다면 반복문을 탈출하게 됨.
*/
int main() {
    char c;
    while(scanf("%c", &c) != EOF) {
        printf("%c", c);
    }

    return 0;
}