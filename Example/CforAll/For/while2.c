#include <stdio.h>

int main()
{
    int i,j;

    printf("1에서 9까지의 수 중 하나를 입력하시오.: ");
    scanf("%d", &i);

    j = 1;

    while (j<10)
    {
        printf("%d * %d = %d\n", i, j, i*j);
        j++;
    }
    
}