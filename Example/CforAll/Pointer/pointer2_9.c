#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *b;

    b=&a[4];
    int sum=0, i;

    for (i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }

    for (i=0; i<5; i++)
    {
        printf("%d\n", *b);
        sum += *b--;
    }

    printf("%d\n",sum);
}