#include <stdio.h>

int main() {
    int a = 10, b= 20;

    int* p = &a;
    int* q = &b;

    *p = *p+5;
    p=q;    //q의 주소가 p에 대입됨. 즉 p는 q가 가리키던 b를 가리키게됨.
    *p = *p+1;  //p는 b를 가리키는데 *p는 b의 데이터
    *q=*p+*q;

    printf("%p",*p);

    return 0;
}