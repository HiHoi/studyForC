#include <stdio.h>

int main()
{
    int x,y;

    for (x=1; x<6; x++)
    {
        for (y=1; y<6; y++)
        {
            if (x == y ) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}