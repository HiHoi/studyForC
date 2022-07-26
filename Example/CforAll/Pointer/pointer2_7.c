#include <stdio.h>

int main()
{
    int i;
    int a[10];
    int *b;

    for (i=0; i<10; i++)
    {
        a[i] = i+1;
    }

    b= &a[0];

    for (i=0; i<10; i++)
    {
        printf("%d\n", *(b+i));
    }

    for (i=0; i<10; i++)
    {
        printf("%d\n", b[i]);
    }
}