/*
문제 : 세 개의 자연수 A, B, C가 주어질 때 
A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 
계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/
#include <stdio.h>

int main() {

    int input;
    int sum = 1;

    int digits[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};    // {0,1,2,3,4,5,6,7,8,9}

    //3개의 숫자 입력(int형으로 3개 입력 받으면 오버플로우 생김 long long하기에는 메모리 부담)
    for(int i=0; i < 3; i++) {
        scanf("%d", &input);
        sum *= input;
    }
    
    while (sum > 0)
    {
       int digit = sum % 10; //나머지값을 digit에 할당
       digits[digit] += 1;  //digts배열에서 1 카운트 시킴
       sum /= 10;   //몫을 다시 넣어서 계산하기 위함 
    }
     
    for(int i=0; i < 10; i++) {
        printf("%d\n", digits[i]);
    }


    return 0;
}