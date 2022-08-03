#include <stdio.h>

int main()
{
	int arr[9];

	for(int i=0; i<9; i++)
	{
		scanf("%d", &arr[i]);
	}

	int cnt;
	int max=arr[0];
	for(int j=0; j<9; j++)
	{
		if(arr[j]>max){
			max = arr[j];
			cnt=j+1;
		}
	}
	printf("%d\n", max);
	printf("%d", cnt);
}
