#include <stdio.h>

int main()
{
    char a = 'A';
    printf("a의 값은 %c\n", a);

    char *b;
    b = &a;
    *b = 'B';

    printf("a의 값은 %c\n", a);
    printf("a의 값은 %c\n", *b);
    printf("a의 주소 값은 %d\n", &a);
    printf("a의 주소 값은 %d\n", b);
}