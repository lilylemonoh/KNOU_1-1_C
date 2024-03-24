// 107 p 생각해보기
// 관계 연산자로 표현된 수식이 참이면 1, 거짓이면 0으로 다루어진다고 하였다.
// c언어에서는 단지 0만 거짓으로 인식하고, 0이 아닌 다른 모든값은 참으로 인식한다.
// 다음과 같은 프로그램의 결과는 어떻게 될까?
#include <stdio.h>
void main() {
    int a = 50;
    if (a)
        printf("TRUE");
    if(!a) // !a is alwas false
        printf("FALSE");
}

// !a는false이다.