// 교재 42페이지 - 문자형의 사용 [예 2]
#include <stdio.h>
int main () {
    char ch; // 문자형 변수 ch 선언
    int in; // 정수형 변수 ch 선언
    ch = in = 'A'; // 실제로는 'A'의 ASCII 코드값인 65 저장
    printf("ch = %d \n", ch); // ch에 저장된 정수 65를 출력
    printf("in = %d \n", in);
    printf("-------- \n");
    ch = in = 100;
    printf("ch = %c \n", ch); // ch에 저장된 정수 100을 ASCII 문자로 출력
    printf("in = %c \n", in);
}