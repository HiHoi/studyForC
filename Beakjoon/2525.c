#include <stdio.h>

int main()
{
    int now_h, now_m, need_t;
    int result_h;
    int result_m = now_m + need_t;

    scanf("%d %d\n", &now_h, &now_m);
    scanf("%d", &need_t);

    if (result_m >= 60){
        result_h = (now_m + need_t) / 60 + now_h;
        result_m = (now_m + need_t) % 60;
    }
    else{
        result_h = now_h;
        result_m = now_m + need_t;
    }

    if (result_h>=24){
        result_h= result_h-24;
    }
    printf("예상 종료 시간은 %d %d입니다.\n", result_h, result_m);
        
}