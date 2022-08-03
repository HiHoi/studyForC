#include <stdio.h>

int main()
{
	int cnt;
	scanf("%d", &cnt);
	
	int arr[cnt];

	for(int i=0; i<cnt; i++)
	{
		scanf("%d", &arr[i]);
	}

	int min = arr[0], max=arr[0];

	for(int j=0; j<cnt; j++)
	{
		if(arr[j]<min)
		{
			min=arr[j];
		}
		if(arr[j]>max)
		{
			max=arr[j];
		}
	}
	printf("%d %d", min, max);
}
