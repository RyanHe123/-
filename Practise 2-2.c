/*Author:RyanHe123
Date:2019-08-31
Content:Practise 2-2
*/
#include<stdio.h>
int main()
{
	int kase=1;
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)==3)
	{
		int state=0;
		int i;
		for(i=10;i<101;i++)
		{
			if(i%3==a&&i%5==b&&i%7==c)
			{
				state=1;
				printf("Case %d: %d\n",kase++,i);
				break;
			}
		}
		if(state==0)
		{
			printf("Case %d: No answer\n",kase++);
		}
	}
	return 0;
}
