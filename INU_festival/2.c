#include <stdio.h>

/*Rook을 통해서 pawn A까지의 최단거리(단, 중간에 막히면 우회)*/
int main() {
    int a, b; //pawn A(목표)
    int x, y; //pawn B(장애물)

    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &y);

    int result;

    if(a==0 || b ==0) { //pawnA가 같은 행 또는 열에 위치
        if(a == 0) {    //pawn A가 같은 열에 있을 때
            if(x == 0 && y > 0 && y < b) {  //pawn B가 다른 열에서 막으면
                result = 3;
            } else {
                result = 1;
            }
        } else {    // pawn A가 같은 행에 있을 때
            if(y==0 && x > 0 && x < a) {    //pawn B가 다른 행에서 막으면
                result = 3;
            } else {
                result = 1;
            }
        }

    } else {
        result = 2; // pawn A 같은 행열에 없음
    }

    printf("%d\n", result);
    return 0;
}