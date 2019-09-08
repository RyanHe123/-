/*Author:RyanHe123
Date:2019-09-03
Content:Practise 3-3*/
#include<stdio.h>
#include<math.h> 
int main()
{
	int t;
	scanf("%d", &t);
	int i;
	for (i = 0; i < t; i++)
	{
		int a[10] = { 0 };
		int n;
		scanf("%d", &n);
		int j;
		for (j = 1; j <= n; j++)
		{
			int num = j;
			while (num != 0)
			{
				a[num % 10]++;
				num /= 10;
			}
		}
		for (j = 0; j < 9; j++)
			printf("%d ", a[j]);
		printf("%d\n", a[9]);
	}
}
	
