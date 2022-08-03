#include <stdio.h>

struct Three_D
{
	int x;
	int y;
	int z;
};

int main()
{
	struct Three_D a;
	a.x= 100;
	a.y= 200;
	a.z= 300;
	printf("구조체 a의 좌표: %d,%d,%d\n",a.x,a.y,a.z);
}
