#include <stdio.h>
#include <string.h>

char keybord[4][11];
char input[10];

int main() {
    for(int i =0; i < 4; i++){
        scanf("%s", keybord[i]);
    }

    scanf("%s", input);

    int need[94] = {0}; // 출력 가능한 문자들의 집합 : 126 - 33 + 1 = 94
    for(int k=0; k <9; k++) {   //input으로 입력된 문자열 중에서 
        unsigned char c = (unsigned char)input[k];  // 입력된 문자를 c에 대입을 해서
        need[c-33]++;   // 0~93범위의 인덱스로 표현
    }

    // for (int i = 0; i < 94; i++)
    // printf("%d ", need[i]);

    // // 중심이 가능한 모든 좌표를 완전 탐색 (2행 * 8열 = 16문자)
    // for(int i = 1; i <= 2; i++) {
    //     for(int j = 1; j <= 8; j++) {

    //         int have[94] = {0}; //현재 중심의 3x3의 문자 빈도표
    //         for(int di = -1; di <= 1; di++) {
    //             for(int dj = -1; dj <=1; dj++) {
    //                 unsigned char c = keybord[i+di][j+dj];
    //                 have[c-33]++;   //주변 9칸 문자 카운트
    //             }
    //         }
            
    //         int same = 1;   //두 빈도표가 동일하면 정답
    //         for(int idx = 0; idx < 94; idx++) {
    //             if (have[idx] != need[idx]) {same = 0; break;}
    //         }

    //         if(same) {
    //             printf("%c\n", keybord[i][j]);
    //             return 0;
    //         }
    //     }
    // }

    
    return 0;
}