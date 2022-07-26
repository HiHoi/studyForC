#include <stdio.h>

int main()
{
    char *name = {"Lim Ho Sung"};
    int i;

    for(i=0; i<11; i++)
    {
        printf("%c\n", *(name+i));
    }
    printf("%p", name);
}