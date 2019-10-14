/*Author:RyanHe123
Date:2019-08-31
Content:Practise 2-6
*/
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	int a,b,c,d,e,f,g,h,i;
	int count[10];
	n1=123;
	for(;n1<330;n1++)
	{
		n2=n1*2;
		n3=n1*3;
		int i;
		for(i=0;i<10;i++)
			count[i]=0;
		count[n1/100]++;
		count[n1%100/10]++;
		count[n1%10]++;
		count[n2/100]++;
		count[n2%100/10]++;
		count[n2%10]++;
		count[n3/100]++;
		count[n3%100/10]++;
		count[n3%10]++;
		int state=1;
		for(i=1;i<10;i++)
		{
			if(count[i]!=1)
			{
				state=0;
				break;
			}
		}
		if(state==1)
		{
			printf("%d %d %d\n",n1,n2,n3);
		}
	}
	
}
