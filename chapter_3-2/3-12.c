// 논리 연산자의 사용 예
#include <stdio.h>
void main() {
    int a = 4, b = 7, c,d,e;

    c = a > 2 && b <= 7; // 양쪽 모두 참이므로 참(논리곱)
    printf("c = %d \n", c);

    d = a < 2 || b <= 7; // b가 참(a는 거짓)이므로 참(논리합)
    printf("d = %d \n", d);

    e = !a; // a가 참(0이 아님)이므로 거짓(논리부정)
    printf("e = %d \n", e);

}