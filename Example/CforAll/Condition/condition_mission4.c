#include <stdio.h>

int main()
{
    int a,b;

    printf("비교할 두개의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);

    if (a>b){
        printf("%d가 %d보다 큽니다.\n", a, b);
    }
    else if (a == b)
    {
        printf("%d랑 %d는 같은 수 입니다.\n", a, b);
    }
    else printf("%d가 %d보다 큽니다.", b, a);
    
}