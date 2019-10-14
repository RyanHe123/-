/*Author:RyanHe123
Date:2019-08-31
Content:Practise 2-3
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=n;
	for(;i>0;i--)
	{
		int j;
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*i-1;j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
