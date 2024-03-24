// 예제 4-2 사용자로부터 양의 정수를 5개 입력받아 합을 구하는 프로그램
// 음수 입력 시 재입력 요구
#include <stdio.h>
void main() {
    int sum = 0, num = 0, i = 0;
    while (i < 5) {
        while (num <= 0) {
            printf("양의 정수를 입력(%d번째):", i + 1);
            scanf("%d", &num);
        }
        sum += num;
        num = 0;
        i++;
    }
    printf("총합: %d \n", sum);
}