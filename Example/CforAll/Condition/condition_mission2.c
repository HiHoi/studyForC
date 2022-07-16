#include <stdio.h>

int main()
{
    int a;

    printf("정수를 입력하시오.: ");
    scanf("%d", &a);

    /*if (a>0){
        printf("이 정수는 양의 정수입니다.\n");
    }
    else if (a<0){
        printf("이 정수는 음의 정수입니다.\n");
    }
    else printf("이 정수는 0입니다.\n");*/

    if (a == 0)
        printf("이 정수는 0입니다.\n");
    else 
        (a>0 ? printf("이 정수는 양의 정수입니다.\n") : printf("이 정수는 음의 정수입니다.\n"));
}