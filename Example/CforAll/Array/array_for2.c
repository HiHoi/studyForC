#include <stdio.h>

int main(){
    int a[5];
    int sum=0;

    for (int i=0; i<5; i++)
    {
        a[i] = i+1;
    }

    for (int i=0; i<5; i++)
    {
        printf("a[%d] = %d\n", i+1, a[i]);
    }
    
    for (int i=0; i<5; i++)
    {
        sum += a[i];
    }
    printf("배열의 총 합: %d\n", sum);
}