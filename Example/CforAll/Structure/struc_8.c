#include <stdio.h>

struct Point{
	int x,y;
};

int main(){
	struct Point a;
	struct Point *b;

	b= &a;

	a.x= 1;
	a.y= 2;

	b->x= 3;
	b->7= 4;

	(*b).x= 5;
	(*b).y= 6;
	
}

