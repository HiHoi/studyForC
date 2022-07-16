#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    a = a+b;

    printf("a의 값은 %d이고, b의 값은 %d입니다.\n", a,b);

    a *= b;
    b *= 10;

    printf("a의 값은 %d이고, b의 값은 %d입니다.\n", a,b);

}