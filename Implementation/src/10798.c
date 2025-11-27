#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[5][15] = {0};
    for(int i =0; i < 5; i++) {
        scanf("%s", str[i]);
    }
    for(int j=0; j < 15; j++) { //열에 있는 문자 반복
        for(int k = 0; k < 5; k++) {    //행에 있는 문자 반복
            if(str[k][j]!='\0') {   //해당 행열에 있는 문자가 개행이 아니라면 
                printf("%c",str[k][j]); //해당 행열에있는 문자 출력
            }
        }
    }
    return 0;
}