#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int i;

    for (i=0; i<5; i++)
    {
        printf("배열 a[%d]번째 방의 주소는 %p입니다.\n",i, &a[i]);
    }
}