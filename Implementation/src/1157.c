#include <stdio.h>
#include <string.h>

int main() {

    char str[1000001];  //입력 버퍼는 백준에 명시되어있는대로 해야 함. 
    scanf("%s", str);                 
    int len = strlen(str);

    char alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";   // \0값 포함 27
    int cnt[26] = {0, };    // cnt 배열 초기화

    // 소문자 -> 대문자
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
    }

    // 알파벳 개수 세기
    for (int i = 0; i < len; i++) {
        // alphabet[i]와 비교하지 말고 A~Z 범위면 해당 인덱스 증가
        if (str[i] >= 'A' && str[i] <= 'Z') {
            cnt[str[i] - 'A']++;
        }
    }

    // 최대값 출력
    int max = 0;
    char tmp = '?';
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > max) {
            max = cnt[i];
            tmp = alphabet[i];
        } else if (cnt[i] == max && max != 0) {
            tmp = '?';
        }
    }

    printf("%c\n", tmp);
    return 0;
}
