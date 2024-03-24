// goto문
// goto문은 무조건적인 분기 명령으로, 보통 루프가 여러 개 중첩되어 있을 경우 한꺼번에 루프를 벗어나고자 할 때 사용된다.
// 반복문 밖에서 안으로의 문기나, if문의 범위 안으로는 이동할 수 없다.
// goto 문은 프로그램의 에러 발생의 원인이 되는 경우가 많으므로 사용하지 않는 것이 좋다.

#include <stdio.h>
void main() {
    int i;
    printf("정수 입력(1~10) : ");
    scanf("%d", &i);
    if (i == 1)
        goto ONE;
    else if(i ==2)
        goto TWO;
    else
        goto EXIT;
    ONE:
    printf("입력한 숫자는 1입니다. \n");
    goto EXIT;
    TWO:
    printf("입력한 숫자는 1입니다. \n");
    goto EXIT;
    EXIT:
    printf("프로그램을 종료합니다. \n");

}
