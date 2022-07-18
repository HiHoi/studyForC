#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int *b;

    b = &a[0];

    printf("a[0]의 주소값은 %d\n", &a[0]);
    printf("a[0]의 주소값은 %d\n", a);
    printf("a[0]의 주소값은 %d\n", b);
    printf("\n");
    printf("a[0]에 저장된 값은 %d\n", a[0]);
    printf("a[0]에 저장된 값은 %d\n", *b);
}
