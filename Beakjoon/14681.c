#include <stdio.h>

int main()
{
    int x, y;
    
    printf("x의 값을 입력하시오: ");
    scanf("%d", &x);

    printf("y의 값을 입력하시오: ");
    scanf("%d", &y);

    if (x>0)
        if (y>0)
            printf("1\n");
        else
            printf("4\n");
    else
        if (y>0)
            printf("2\n");
        else
            printf("3\n");
    
    
}