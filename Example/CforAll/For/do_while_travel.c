#include <stdio.h>

int main()
{
    int a =0;

    do
    {
        printf("당신이 가고 싶은 곳은 어디인가요?\n");
        printf("1. 일본\n");
        printf("2. 미국\n");
        printf("3. 태국\n");
        printf("4. 스페인\n");
        printf("가고 싶은 곳의 번호를 입력하시오.: ");
        scanf("%d", &a);
    } while (a==0 || a>4);

    if (a == 1) printf("일본에 가고싶은 당신! 떠나라~");
    else if (a == 2) printf("미국에 가고 싶은 당신!");
    else if (a == 3) printf("태국에 가고 싶은 당신!");
    else if (a == 4) printf("스페인에 가고 싶은 당신!");
    
    
}