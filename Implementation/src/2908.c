//  수의 크기를 비교 세 자리 수 두 개를 칠판에 써주었다. 크기가 큰 수를 말해보라고 했다.

// 예를 들어, 734와 893을 칠판에 적었다면, 상수는 이 수를 437과 398로 읽는다. 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

// 두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

// 첫째 줄에 상근이가 칠판에 적은 두 수 A와 B가 주어진다. 두 수는 같지 않은 세 자리 수이며, 0이 포함되어 있지 않다.

// 첫째 줄에 상수의 대답을 출력한다.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    if(a != b) {
        int last_a = a % 10;
        int mid_a = (a / 10) % 10;
        int first_a = a / 100;

        int last_b = b % 10;
        int mid_b = (b / 10) % 10;
        int first_b = b / 100;

        int rev_a = (last_a * 100) + (mid_a * 10) + first_a;
        int rev_b = (last_b * 100) + (mid_b * 10) + first_b;

        if(rev_a < rev_b) {
            printf("%d", rev_b);
        } else if( rev_a > rev_b) {
            printf("%d", rev_a);
        }
    }
    return 0;
}