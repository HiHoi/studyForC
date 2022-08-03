#include <stdio.h>

int sum(int n);

int main()
{
	int a;
	scanf("%d", &a);
	sum(a);
}

int sum(int n)
{
	int sum=0;
	for(int i=0; i<n+1; i++)
	{
		sum = sum + i;
	}
	printf("%d\n",sum);
	return 0;
}
