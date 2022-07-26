#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *b;
    int i;

    b=&a[0];

    for(i=0; i<5; i++)
    {
        printf("%d\n", *(b+i));
    }

    for(i=0; i<5; i++)
    {
        *(b+i) *= 10;
    }
    
    for(i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
}