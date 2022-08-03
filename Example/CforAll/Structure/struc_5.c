#include <stdio.h>

struct Point
{
	int x;
	int y
};

struct Circle
{
	struct Point a;
	int radius;
};

int main()
{
	struct Circle c1;

	c1.a.x=8;
	c1.a.y=7;
	c1.radius=4;
	printf("원의 중심 좌표는 (%d, %d)이고 반지름은 %d입니다.\n", cl.a.x, c1.a.y, c1.radius);
}
