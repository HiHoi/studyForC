#include <stdio.h>

int main()
{
    int score;

    printf("당신의 학점을 입력하시오.: ");
    scanf("%d", &score);

    switch (score / 10)
    {
    case 10:
    case 9:
        printf("당신의 학점은 %c입니다.\n", 'A');
        break;
    case 8:
        printf("당신의 학점은 %c입니다.\n", 'B');
        break;
    case 7:
        printf("당신의 학점은 %c입니다.\n", 'C');
        break;
    case 6:
        printf("당신의 학점은 %c입니다.\n", 'D');
        break;
    default:
        printf("당신의 학점은 %c입니다.\n", 'F');
    }
}