#include <stdio.h>

int main()
{
    int i =1;
    int sum = 0;

    while (i<2020){
        sum += i;
        i++;
    }
    printf("%d\n", sum);
}