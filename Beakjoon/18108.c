#include <stdio.h>

int main(){
    int butda_yr;
    int current_yr;

    printf("현재 불멸기원은?: ");
    scanf("%d", &butda_yr);

    current_yr = butda_yr - 543;

    printf("현재 년도는 %d입니다.\n", current_yr);
}