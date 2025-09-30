#include <stdio.h>
#include <string.h>

int main() {
    // 각 문자에 대한 걸리는 시간을 배열로 나타냄
    int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    char str[16];   //입력 받을 문자열 버퍼 크기
    scanf("%s", str);
    
    int len = strlen(str);
    int result = 0;
    for(int i=0; i < len; i++) {
        result = result+ time[str[i] - 'A'];        //입력받은 문자열에서 문자 구분하고 -'A'를 하면 정수 65빼는거여서
                                                    // A가 오면 0, B가오면 1 ... Z가 오면 25과 같이 인덱스로 구분 가능
    }

    printf("%d\n", result);
}
