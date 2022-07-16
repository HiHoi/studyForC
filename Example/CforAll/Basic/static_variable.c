#include <stdio.h>

void bell();

int main()
{
    bell();
    bell();
    bell();
}

void bell()
{
    static int order = 0;
    order++;

    printf("현재 주문번호는 %d입니다.\n", order);
}