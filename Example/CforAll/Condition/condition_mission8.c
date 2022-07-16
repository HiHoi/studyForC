#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    int average;


    printf("첫 번째 과목의 성적을 입력하시오.:");
    scanf("%d", &sub1);

    printf("두 번째 과목의 성적을 입력하시오.:");
    scanf("%d", &sub2);

    printf("세 번째 과목의 성적을 입력하시오.:");
    scanf("%d", &sub3);

    average = (sub1 + sub2 + sub3) / 3;
    printf("당신의 평균 성적은 %d입니다.\n", average);

    switch (average / 10)
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

    if (average >= 60){
        if ((sub1>=40) & (sub2 >= 40) & (sub3 >= 40)){
            printf("Pass!!\n");
        }
        else printf("Fail...\n");
    }
    else printf("Fail...\n");
}