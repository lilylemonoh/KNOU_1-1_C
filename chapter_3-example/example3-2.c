// 예제 3-2
// 다음은 C언어에서 제공하는 각종 연산자를 이용하여 입력된 액수를
// 500원, 100원, 50원, 10원짜리 동전으로 교환해주는 프로그램이다.

#include <stdio.h>
void main()
{
    int in_money, coin_500, coin_100, coin_50, coin_10;
    printf(" 동전으로 교환할 금액은? ");
    scanf("%d", &in_money);
    coin_500 = in_money / 500;
    in_money = in_money % 500;
    coin_100 = in_money / 100;
    in_money = in_money % 100;
    coin_50 = in_money / 50;
    in_money = in_money % 50;
    coin_10 = in_money / 10;
    in_money = in_money % 10;
    printf("\n 오백 원짜리 ==> %d 개 \n", coin_500);
    printf("백 원짜리 ==> %d 개 \n", coin_100);
    printf("오십 원짜리 ==> %d 개 \n", coin_50);
    printf("십 원짜리 ==> %d 개 \n", coin_10);
    printf("바꾸지 못한 잔도 ==> %d 원 \n", in_money);
}