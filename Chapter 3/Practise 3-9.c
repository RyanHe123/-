/*Author:RyanHe123
Date: 2019-09-04
Content: Practise 3-9*/
#include<stdio.h>
#include<string.h>
//字符串一定要开大一些，刚开始开的比较小，就RE了 
char s[1000000],t[1000000];
int main()
{
	//读取字符串
	while((s[0]=getchar())!=EOF)
	{
		int i=1;
		while((s[i]=getchar())!=' ')
			i++;
		s[i]='\0';
		i=0;
		while((t[i]=getchar())!='\n')
			i++;
		int index=0; 
		for(i=0;i<strlen(t);i++)
	{
		if(s[index]==t[i])
			index++;
		
	}
		if(index==strlen(s))
		printf("Yes\n");
		else
		printf("No\n");
		//初始化数组，防止上一次实验对下一次有影响 
		memset(s,0,sizeof(s));
		memset(t,0,sizeof(t));
	 } 
}
