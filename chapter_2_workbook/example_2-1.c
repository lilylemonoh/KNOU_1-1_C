// 워크북 8페이지
// 상수와 변수의 개념
// 예제 2-1 상수, 변수의 정의와 선언에 관련한 프로그램
#include <stdio.h>
#define PI 3.141592 // 매크로 정의를 이용한 상수 정의
const int K=10; // const를 이용한 상수 정의
void main()
{
    double a;
    a = K + PI;
//    K = 20; //상수는 변하는 값이 아니므로 값을 변화시키면 에러 발생
    printf("%f\n", a);

    int x;
    int y;
    int z;

    x = 10;
    y = 20;
    z = x+y;

    printf("%d\n", z);

}