#include <stdio.h>

int main()
{
    int i;
    int sum1, sum2 = 0;

    for (i=1 ; i<=2019 ; i++ )
        sum1 += i; //i의 값에 1를 더하고 다시 그 수를 더하는 방식
        printf("1에서 2019까지의 합계는 %d입니다.\n", sum1);

    /*for (i=2 ; i<=2019 ; i+=2)
        sum2 += i;
        printf("1에서 2019 중 짝수들의 합은 %d입니다.\n", sum2);*/

    for (i=1 ; i<=2019 ; i++)
        if ((i%2) == 0) sum2 += i;
        printf("1에서 2019 중 짝수들의 합은 %d입니다.\n", sum2);
}