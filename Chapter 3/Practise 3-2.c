/*Author:RyanHe123
Date:2019-09-03
Content:Practise 3-2*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
char s[90];
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	for(;i<n;i++)
	{
		double atom;
		int count=1;
		scanf("%s",s);
		int j;
		double sum=0;
		for(j=0;j<strlen(s);j++)
		{
			switch(s[j])
			{
				case 'C':atom=12.01;break;
				case 'H':atom=1.008;break;
				case 'O':atom=16.00;break;
				case 'N':atom=14.01;break;
			}
			if(isdigit(s[j+1])!=0)
				count=s[++j];
			while(isdigit(s[j+1])!=0)
				count=count*10+s[++j];
			sum+=count*atom;
		}
		printf("%.3f\n",sum);
	}
}
