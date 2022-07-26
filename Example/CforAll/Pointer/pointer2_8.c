#include <stdio.h>

int main()
{
    int i;
    int a[5] = {1,2,3,4,5};
    int *b;

    b=a;

    for (i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }

    for (i=0; i<5; i++)
    {
        *b += 2;
        b++;
    }

    for (i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
}