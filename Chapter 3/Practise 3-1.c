/*Author:RyanHe123
Date:2019-09-03
Content:Practise 3-1*/ 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	getchar();
	for (; i < n; i++)
	{
		char ch; int sum = 0;
		int state = 0;
		while ((ch = getchar()) !='\n')
		{
			if (ch == 'O')
			{
				state++;
				sum += state;
			}
			else
			{
				state = 0;
			}
		}
		printf("%d\n", sum);
	}
}
