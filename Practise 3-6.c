/*Author:RyanHe123
Date:2019-09-03
Content:Practise 3-6*/
#include<stdio.h>
int main()
{
	int a,b;
	int kase=1;
	while(scanf("%d",&a)&&a!=0)
	{
		scanf("%d",&b);
		if(kase!=1)
		printf("\n"); 
		char p[a][b+1];int n[a][b];
		int i,j;
		getchar();//�������̵�����a��bʱ������\n 
		for(i=0;i<a;i++)
			for(j=0;j<b;j++)n[i][j]=0;//��n�����ʼ��0 
		//��ȡ����ʽ
		for(i=0;i<a;i++)
			fgets(p[i],b+2,stdin);
		//�����ʼ��
		int count=1;
		for(i=0;i<b;i++)
		if(p[0][i]!='*')n[0][i]=count++;		//��ǵ�һ�� 
		for(i=1;i<a;i++)
		{
			if(p[i][0]!='*')n[i][0]=count++;
			for(j=1;j<b;j++)
			if((p[i][j-1]=='*'||p[i-1][j]=='*')&&p[i][j]!='*') n[i][j]=count++;
		}
		/*for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		{
			printf("%d ",n[i][j]);d
			if(j==b-1)printf("\n");
		}*/
		//Ѱ�ҷ����������� 
		printf("puzzle #%d:\nAcross\n",kase++);
		//���� 
		for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		{
			if(j==0&&p[i][0]!='*')
			{
				printf("%3d.",n[i][0]);
				while(p[i][j]!='*'&&j<b)
				putchar(p[i][j++]);
				printf("\n");
			}
			while(p[i][j]=='*'&&j<b){
				j++;
			}
			if(j>=b)break;
			printf("%3d.",n[i][j]);
			while(p[i][j]!='*'&&j<b)
				putchar(p[i][j++]);
				printf("\n");
		 } 
		//���� ����Ҫ���պ���˳���������Ⱥ����� 
		printf("Down\n");
		int temp; 
		for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		{
			if(i==0&&p[0][j]!='*')
			{
				printf("%3d.",n[0][j]);
				temp=i;
				while(p[temp][j]!='*'&&temp<a)
				putchar(p[temp++][j]);
				printf("\n");
			}
			if(i>0&&p[i][j]!='*'&&p[i-1][j]=='*')
			{
				printf("%3d.",n[i][j]);
				temp=i;
				while(p[temp][j]!='*'&&temp<a)
				putchar(p[temp++][j]);
				printf("\n");
			}

		 } 
		 
	} 
	
 } 
