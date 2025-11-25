/*
    정수 저장 스택
    push X : 정수 X를 스택에 넣는다
    pop : 스택에서 가장 위에 있는 정수를 빼고 출력
        만약 아무 것도 없다면 -1 출력
    size : 정수의 개수 출력
    empty : 스택이 비어있다면 1, 아니라면 0
    top : 스택의 가장 위에 있는 정수 출력
        만약 아무것도 없다면 -1 출력

    입력 : 명령의 수
*/
#include <stdio.h>
#include <string.h>

#define MAX_NUMBER 10000

int stack[MAX_NUMBER];
int up = -1;

void push(int x) {
    stack[++up] = x;
}

void pop(void) {
    if(up == -1) printf("-1\n");
    else printf("%d\n", stack[up--]);
}

void size(void) {
    printf("%d\n", up+1);
}

void empty(void) {
    if(up==-1) printf("1\n");
    else printf("0\n");
}

void top(void) {
    if(up==-1) printf("-1\n");
    else printf("%d\n", stack[up]);
}


int main(void) {
    int n,m;
    char cmd[100];
    scanf("%d", &n);
    
    for(int i =0; i < n; i++) {
        scanf("%s", cmd);
        if(!strcmp(cmd, "push")) {
            int x;
            scanf("%d", &x);
            push(x);
        }
        else if(!strcmp(cmd, "pop")) {
            pop();
        }
        else if(!strcmp(cmd, "size")) {
            size();
        }
        else if(!strcmp(cmd, "empty")) {
            empty();
        }
        else if(!strcmp(cmd, "top")) {
            top();
        }
    }
    
    return 0;
}