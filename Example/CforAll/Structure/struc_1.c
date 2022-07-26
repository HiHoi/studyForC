#include <stdio.h>

struct myclass {
	int number;
	double weight;
};

int main()
{
	struct myclass a;
	struct myclass b;

	a.number = 12;
	a.weight = 55.3;
	b.number = 27;
	b.weight = 57.6;

	printf("1번 학생 번호는 %d이고 몸무게는 %4f입니다.\n", a.number, a.weight);
	printf("2번 학생 번호는 %d이고 몸무게는 %4f입니다.\n", b.number, b.weight);
}
