#include <stdio.h>

int main()
{
    int i;
    int score[5];
    int max, min;
    float sum =0.0;

    //성적 입력
    for (i=0; i<5; i++)
    {
        printf("%d번째 과목 성적을 입력하시오: ", i+1);
        scanf("%d", &score[i]);
    }
    
    //성적의 총합
    for (i=0; i<5; i++)
    {
        sum += score[i];
    }
    printf("모든 과목 성적의 총합은 %f입니다.\n", sum);
    //성적 평균 값
    printf("과목 평균 값은 %f\n", sum/5);
    //최고와 최저
    max = score[0];
    min = score[0];

    for (i=0; i<5; i++)
    {
        if(score[i] > max)
            max = score[i];
        if(score[i] < min)
            min = score[i];
    }

    printf("최고 성적은 %d\n", max);
    printf("최저 성적은 %d\n", min);
}