#include <stdio.h>

int main()
{	
	int i, question_cnt;

	scanf("%d",&question_cnt);
	for(i=0; i<question_cnt; i++)
	{
		int a,b;
		scanf("%d %d\n", &a,&b);
		printf("%d", a+b);
	}
}
