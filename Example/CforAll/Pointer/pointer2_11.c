#include <stdio.h>

int main()
{
    int a[6] = {1,2,3,4,5,6};
    int *front = &a[0];
    int *back = &a[5];
    int i, temp;

    for (i=0; i<6; i++)
    {
        printf("%d", a[i]);
    }
    
    for (i=0; i<3; i++)
    {
        temp = *front; //temp = front[0]
        *front = *back; //front[0] = back[5]
        *back = temp; //back[5] = temp = front[0]

        front += 1;//front[0]->[1]
        back -=1;//back[5]->[4]
    }

    for (i=0; i<6; i++)
    {
        printf("%d", a[i]);
    }
}