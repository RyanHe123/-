/*Author:RyanHe123
Date:2019-08-31
Content:Practise 2-5*/
#include<stdio.h>
int main()
{
	int a,b,c;
	int kase=0;
	while(scanf("%d %d %d",&a,&b,&c)==3&&a&&b&&c)
	{
		double res;
		res=(double)a/b;
		char s[15]="Case %d:%.cf\n";
		s[10]='0'+c;
		printf(s,++kase,res);
	}
	return 0;
 } 
