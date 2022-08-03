#include <stdio.h>

int main()
{
	int input;
	int sum = 0;
	int score = 0;
	scanf("%d",&input);
	
	char answer[80];

	for(int i=0; i<input; i++)
	{
		scanf("%s", answer);
		for(int j=0; j<80; j++)
		{
			if(answer[j]=='O')
			{
				score++;
				sum += score;
			}
			else score=0;
		}
		printf("%d\n", sum);
		sum = 0;
		score = 0;
	}
}
