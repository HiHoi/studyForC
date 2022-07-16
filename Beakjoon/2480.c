#include <stdio.h>

int main()
{
    int a,b,c;
    int reward;

    scanf("%d %d %d",&a,&b,&c);

    if ((a == b) & (a == c) & (b==c)){
        reward = 10000+(a*1000);
    }
    else if ((a!=b)&(b!=c)&(a!=c))
    {
        int max;
        if ((a>b)&&(a>c)) max=a;
        else if ((b>c)&&(b>a)) max=b;
        else max=c;

        
        reward =  max * 100;
    }
    else{
        int cnt;
        if (a==b){
            cnt = a;
        }
        else if (a==c)
        {
            cnt = c;
        }
        else cnt = b;
        
        reward = 1000 + cnt*100;
    }
    printf("%d", reward);
}
