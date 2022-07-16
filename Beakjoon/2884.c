#include <stdio.h>

int main()
{
    int real_h, real_m, alram_h, alram_m;

    printf("일어나야 하는 시간을 입력하시오: ");
    scanf("%d %d", &real_h, &real_m);

    alram_m = real_m - 45;

    if (real_h == 0){
        alram_h = 23;
        if (alram_m < 0){ //10시 15분 -> 9시 30분 15-45=-30
            alram_m = alram_m + 60;
            printf("%d %d", alram_h, alram_m);
            }
        else {
            alram_h = real_h;
            printf("%d %d", alram_h, alram_m);
            }
    }   
        
    else{
        if (alram_m < 0){ //10시 15분 -> 9시 30분 15-45=-30
            alram_h = real_h - 1;
            alram_m = alram_m + 60;
            printf("%d %d", alram_h, alram_m);
            }
        else {
            alram_h = real_h;
            printf("%d %d", alram_h, alram_m);
            }
    }  
    
}