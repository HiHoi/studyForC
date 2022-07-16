#include <stdio.h>

int main()
{
    int a,b;

    printf("서로 다른 두 수를 입력하세요:\n");
    printf("a= ");
    scanf("%d", &a);

    printf("b= ");
    scanf("%d", &b);

    a>b ? printf("입력된 두 수 중 큰 값은 %d입니다.", a) : printf("입력된 두 수 중 큰 값은 %d입니다.", b);

}