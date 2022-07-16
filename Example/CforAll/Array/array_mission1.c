#include <stdio.h>

int main()
{
    int i;
    int myClass[5];
    double sum;

    for (i=0; i<5; i++)
    {
        printf("1반 %d번 학생의 키를 입력하시오: ", i+1);
        scanf("%d", &myClass[i]);
        
        printf("1반 %d번 학생의 키가 저장되었습니다.\n", i+1);

        sum += myClass[i];
    }
    
    printf("1반 학생들의 키를 공개합니다.\n");
    for (i=0; i<5; i++)
    {
        printf("%d번 학생: %d\n", i+1, myClass[i]);
    }
    printf("1반 학생 평균 키는 %f입니다.", sum/5);
}