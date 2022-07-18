#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *b;
    int i;

    printf("기존 배열 a의 값 출력\n");

    for (i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    printf("배열 a의 각 요소에 10을 더하여 변경\n");
    b=a;

    for (i=0; i<5; i++)
    {
        *(b+i) += 10;
    }

    for (i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
}