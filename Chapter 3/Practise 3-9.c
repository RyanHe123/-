/*Author:RyanHe123
Date: 2019-09-04
Content: Practise 3-9*/
#include<stdio.h>
#include<string.h>
//�ַ���һ��Ҫ����һЩ���տ�ʼ���ıȽ�С����RE�� 
char s[1000000],t[1000000];
int main()
{
	//��ȡ�ַ���
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
		//��ʼ�����飬��ֹ��һ��ʵ�����һ����Ӱ�� 
		memset(s,0,sizeof(s));
		memset(t,0,sizeof(t));
	 } 
}
