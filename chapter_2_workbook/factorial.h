// 워크북 12페이지
// 이 헤더 파일은 factorial을 구하는 프로그램으로서 헤더 파일로 사용하기 위해 미리 보관되어 있어야 함
#define ONE 1
int factorial (int n)
{
    if (n > ONE)
        return (n* factorial((n-1)));
    else
        return (ONE);
}