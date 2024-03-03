// 교재 39페이지

// CLion 콘솔창 한글 깨짐 해결법
//Settings -> FileEncoding -> ProjectEncoding : UTF-8로 설정
#include <stdio.h>
#include <limits.h> // 정수 자료형 최솟값, 최댓값 표현
int main() {
    char ch1 = CHAR_MIN; // char 최솟값
    char ch2 = CHAR_MAX; // char 최댓값
    short sh1 = SHRT_MIN; // short 최솟값
    short sh2 = SHRT_MAX; // short 최댓값
    int in1 = INT_MIN; // int 최솟값
    int in2 = INT_MAX; // int 최댓값
    long lo1 = LONG_MIN; // long 최솟값
    long lo2 = LONG_MAX; // long 최댓값
    long long ll1 = LONG_LONG_MIN; // long long 최솟값
    long long ll2 = LONG_LONG_MAX; // long long 최댓값

    printf("char 자료형 범위 : %d ~ %d \n", ch1, ch2);
    printf("short 자료형 범위 : %d ~ %d \n", sh1, sh2);
    printf("int 자료형 범위 : %d ~ %d \n", in1, in2);
    printf("long 자료형 범위 : %ld ~ %ld \n", lo1, lo2);
    printf("long long 자료형 범위 : %lld ~ %lld \n", ll1, ll2);
}