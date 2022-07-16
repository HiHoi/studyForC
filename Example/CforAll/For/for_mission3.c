#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    int result;

    printf("마지막 수를 입력하여 주세요.: ");
    scanf("%d", &n);

    result = sum(n);
    printf("총 합계는 %d입니다.\n", result);
}

int sum(int n){
    int i;
    int sum = 0;
    for (i=1; i<=n; i++)
        sum += i;
    return sum;
}