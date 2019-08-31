/*Author:RyanHe123
Date:2019-08-31
Content:Practise 2-1
*/
#include<stdio.h>
int main()
{
	int n=100;
	int a,b,c;
	for(;n<1000;n++)
	{
		a=n/100;
		b=n%100/10;
		c=n%10;
		if(n==a*a*a+b*b*b+c*c*c)
		{
			printf("%d\n",n);
		}
		}	
 } 
