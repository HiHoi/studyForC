#include <stdio.h>

int main()
{
    int mon, day;

    printf("이 달은 몇일까지 있을까요?\n");
    printf("알고 싶은 달을 입력해주세요.:");
    scanf("%d", &mon);

    switch (mon)
    {
    case 2:
        day = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    default:
        day = 31;
        break;
    }

    printf("%d월의 마지막 날은 %d입니다.\n", mon, day);
}