// 예제 3-1
// 다음은 입력된 정수형, 실수형, 문자열 자료에 대한 출력 양식에 관한 프로그램이다.

#include <stdio.h>
void main() {
    int i = 873;
    float f = 123.4567;
    char s[] = "Happy birthday";
    printf("정수형 자료의 출력 \n");
    printf("\t %04d \n \t %09d \n\n", i, i);
    printf("실수형 자료의 출력 \n");
    printf("\t %.3f \n \t %.3e \n\n", f, f);
    printf("문자열 자료의 출력 \n");
    printf("\t %.11s \n", s);

}