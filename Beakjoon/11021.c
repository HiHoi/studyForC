#include <stdio.h>

int main()
{
    int cnt;
    int a,b;
    scanf("%d", &cnt);

    for(int i=0; i<cnt; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n",i+1, a+b);
    }
}
