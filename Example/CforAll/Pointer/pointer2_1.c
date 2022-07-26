#include <stdio.h>

int main()
{
    int a= 10;
    int b= 20;
    int c;
    int *x[3];

    x[0] = &a;
    x[1] = &b;
    x[2] = &c;
    *x[2] = *x[0] + *x[1];

    printf("c의 값은 %d입니다.\n", c);
}