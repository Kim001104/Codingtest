#include <stdio.h>
#include <string.h>

/*
    1. test_cae입력 받고 입력 받은만큼 문자열을 반복해서 읽기.
    2. 입력 받은 문자열에서 길이를 구하고 그 길이만큼 반복을 하며 O를 찾기
    3. O를 카운트 할 수 있는 변수, 점수를 0으로 초기화
    4. 반복문에서 O를 만났다면 카운트 값 증가하여서 점수에 더 하기.
    5. O가 아니라면 반드시 0으로 초기화
    6. 이것을 반복하다가 보면 점수는 sum과 같아서 총 점수가 출력이 됨.
*/

int main() {
    int test_case;
    scanf("%d", &test_case);

    char test[10001];
    
    for(int i = 0; i <test_case; i++) {
        scanf("%s", test);

        int len = strlen(test);
        int score = 0;
        int cnt = 0;

        for(int j = 0; j < len; j++) {
            if(test[j] == 'O') {
                cnt++;
                score += cnt;
            } else cnt = 0;
        }

        printf("%d\n", score);
    }


    return 0;
}