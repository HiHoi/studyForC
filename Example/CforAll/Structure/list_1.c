#include <stdio.h>

int main()
{
	int i;

	struct myClass
	{
		int number;
		int weight;
		int height;
	};

	struct myClass a[5];

	for (i=0; i<5; i++)
	{
		printf("%d번 학생의 번호는?", i+1);
		scanf("%d", &(a[i].number));
		printf("%d번 학생의 몸무게는?", i+1);
		scanf("%d", &(a[i].weight));
		printf("%d번 학생의 키는?", i+1);
		scanf("%d", &(a[i].height));		
	}

	printf("우리 반 학생들의 학번, 몸무게, 키 정보\n");

	for(i=0; i<5; i++)
	{
		printf("%d번 학생 정보입니다. 학생 번호: %d, 몸무게: %d, 키: %d\n", i+1,a[i].number, a[i].weight, a[i].height); } 
}
