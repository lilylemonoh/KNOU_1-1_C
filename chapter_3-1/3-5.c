// getchar() 함수의 사용 예
// getchar() 함수는 문자 단위의 입력함수로, 하나의 문자를 키보드를 통해 받아들이고,
// 이 문자를 받아들여 저장하는 변수는 정수형이나 문자형으로 선언되어야 한다.
// 특히 getchar() 함수는 괄호 안에 인자를 지정하지 않으며, 문자 입력 후 엔터 키를 눌러야만 자료가 입력된다.

#include <stdio.h>
void main() {
    char a;
    printf("문자 하나를 입력하세요 \n");
    a = getchar(); // 한 문자가 입력되면 문자형 변수 a에 저장
    printf("c = %c \n", a);
}