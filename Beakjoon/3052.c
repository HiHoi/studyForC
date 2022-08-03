#include <stdio.h>

int main()
{
	int result =0,input=0;
	int remains[10];

	for(int i=0; i<10; i++) 
	{
		scanf("%d",&input);		
		remains[i]= input%42;
	}
	for(int i=0; i<10; i++)
	{
		int count =0;
		for(int j=i+1; j<10;j++)
		{
			if(remains[i]==remains[j]) count++;
		}
		if(count==0) result++;
    }
	printf("%d", result);
}
