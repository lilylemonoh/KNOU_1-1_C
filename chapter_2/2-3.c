// 교재 41페이지
#include <stdio.h>
int main() {
    char ch1; // 문자형 변수 ch1 선언
    char ch2; // 문자형 변수 ch2 선언
    ch1 = 0; // 십진수 0 저장
    ch2 = '0'; // 실제로는 0의 ASCII 코드 값 저장
    printf("ch1의 ASCII 코드값 = %d, ASCII 문자 = %c \n", ch1, ch1);
    // ch1에 저장된 정수 0을 출력, ASCII 코드값 0은 null 문자
    printf("ch2의 ASCII 코드값 = %d, ASCII 문자 = %c\n", ch2, ch2);
    // ch2에 저장된 ASCII 문자 '0' 코드값 48 출력
}