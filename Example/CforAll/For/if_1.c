#include <stdio.h>

int main()
{
    int i = 0;

    for (i=1; i<=100; i++)
        if ((i%4) == 0){
            printf("A\n");
        }
        else if ((i%4)==1)
        {
            printf("B\n");
        }
        else if ((i%4)==2)
        {
            printf("C\n");
        }
        else if ((i%4)==3)
        {
            printf("D\n");
        }
        else printf("E\n");
        
        
}