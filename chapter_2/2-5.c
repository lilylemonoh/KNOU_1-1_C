// 교재 44페이지 - 8진수 16진수 사용 [예]
#include <stdio.h>
void main () {
    int num1 = 104; // 정수형 변수 num1에 10진수 104 저장
    int num2 = 0150; // 정수형 변수 num2에 8진수 150 저장
    int num3 = 0x68; // 정수형 변수 num3에 16진수 68 저장
    /* num1, num2, num3에 저장된 정수를 10진수로 출력 */
    printf("num1에 저장된 정숫값은 : %d \n", num1);
    printf("num2에 저장된 정숫값은 : %d \n", num2);
    printf("num3에 저장된 정숫값은 : %d \n", num3);
}