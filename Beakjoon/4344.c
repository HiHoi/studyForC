#include <stdio.h>

int main()
{
	int caseNum;
	int subject;
	
	scanf("%d", &caseNum);

	for(int i=0; i<caseNum; i++)
	{	
		int average = 0;
		int total =0;
		scanf("%d ", &subject);
		int score[subject];
		for(int j=0; j<subject; j++)
		{
			scanf("%d", &score[j]);
			total += score[j];
		}
		average = (double)total / subject;
		int cnt=0;
		for (int k=0; k<subject; k++)
		{
			if(score[k]>average) cnt++;
		}
		printf("%.3f%%\n", (double)cnt * 100/subject);
	}
}
