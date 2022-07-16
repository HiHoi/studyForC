#include <stdio.h>

int main()
{
    int i;

    for (i=0; i<10; i++)
    {
        if (i>5) break;
        if (i%2 == 0) printf("%d\n", i);
        else continue;
    }
}