#include <stdio.h>

int compare(int a, int b);
int absolute(int n);

int main()
{
    int a, b;

    printf("비교해야할 두 정수를 입력하시오.\n");
    printf("첫 번째 수 A를 입력하시오.: ");
    scanf("%d", &a);

    printf("두 번째 수 B를 입력하시오.: ");
    scanf("%d", &b);

    printf("첫 번째로 입력된 수는 %d이고, 두 번째로 입력된 수는 %d입니다. 두 개중 절댓값이 큰 수는 %d입니다.\n", a,b,compare(a,b));
}

int compare(int a, int b)
{
    if (absolute(a) > absolute(b)) return a; //절댓값 함수로 비교 후 입력된 수로 다시 결과를 보여줌.
    else return b;
}

int absolute(int n)
{
    if (n<0) return (-1)*n;
    else return n;
    
}