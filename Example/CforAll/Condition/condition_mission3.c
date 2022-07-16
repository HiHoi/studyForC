#include <stdio.h>

int main()
{
    int a;

    printf("귀하의 시험 점수를 입력하시오: ");
    scanf("%d", &a);

    if (a >= 90){
        printf("귀하의 학점은 A입니다.\n");
    }
    else if(80 <= a){
        printf("귀하의 학점은 B입니다.\n");
    }
    else if (70 <= a)
    {
        printf("귀하의 학점은 C입니다.\n");
    }
    else if (60 <= a)
    {
        printf("귀하의 학점은 D입니다.\n");
    }
    else printf("귀하의 학점은 F입니다.\n");
    
}