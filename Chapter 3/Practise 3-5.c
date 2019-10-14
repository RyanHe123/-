/*Author:RyanHe123
Date:2019-09-03
Content:Practise 3-5*/
//这道题的输出格式有很多坑，PE了无数次 
#include<stdio.h>
int main()
{
	 //输入矩阵
	int kase=1,state;
	int i,j;
	for(;;)
	{
	state=1;
	int x,y;
	char p[5][6],ch;
	for(i=0;i<5;i++)
	{
		fgets(p[i],7,stdin);
		if(p[0][0]=='Z'&&p[0][1]=='\n')
			return 0;
 	}
 	//搜索空格位置 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(p[i][j]==' ')
			{x=i;y=j;}
		}
	} 	
 	while((ch=getchar())!='0')
 	{
 		switch(ch)
 		{
 			case'A':if(x==0)state=0;
			 else{p[x][y]=p[x-1][y];p[x-1][y]=' ';x--;}break;	//边界判断和移动
 			case'B':if(x==4)state=0;
			 else{p[x][y]=p[x+1][y];p[x+1][y]=' ';x++;}break;
 			case'L':if(y==0)state=0;
			 else{p[x][y]=p[x][y-1];p[x][y-1]=' ';y--;}break;
 			case'R':if(y==4)state=0;
			 else{p[x][y]=p[x][y+1];p[x][y+1]=' ';y++;}break;
		}
	}
	//输出 
	if(kase!=1)
	printf("\n");
	printf("Puzzle #%d:\n",kase++);
	if(state==0)
	printf("This puzzle has no final configuration.\n");
	else
	{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c",p[i][j]);
			if(j!=4)printf(" "); 
		}
		printf("\n");
	} 	
	}
	 getchar();
	}
}
