/*Author:RyanHe123
Date:2019-09-03
Content:Practise 3-4*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		char s[100];
		scanf("%s",s);
		int t;
		for(t=1;t<=strlen(s);t++)
		{
			//一开始忽略了结尾不是完整周期结束的情况 
			if(strlen(s)%t!=0)
				continue;
			int j=0,state=1;
			for(;j<strlen(s);j++)
			{
				if(s[j]!=s[j%t])
				{
					state=0;
					break;
				}
			}
			if(state==1)
				{
					if(i!=0)printf("\n");
				printf("%d\n",t);break;
				}
		}
	}
}
