#include <stdio.h>

int main()
{
    int a,b;

    printf("a 입력값이 10보다 크면 b는 2, 그렇지 않으면 1이 됩니다.\n");
    printf("a 값을 입력하세요: ");
    scanf("%d", &a);

    b = a > 10? 2 : 1;

    printf("b의 값은 %d입니다.\n", b);
}