/*Author:RyanHe123
Date:2019-09-08
Content:Practise 3-8*/
#include<stdio.h>
#include<string.h>
struct combine
{
	int x, y;
};// 记录除数和余数 
combine c[2000] = { 0 }; int yu[3000] = { 0 };//记录余数 ，数组一定要开在main外面，不然会出问题 
int main()
{
	int a, b;
	while (EOF != scanf("%d", &a))
	{
		scanf("%d", &b);
		int n = a;
		int d = a / b;
		c[0].y = a % b;
		yu[a%b]++;
		a = a % b * 10;
		int i;
		for (i = 1;; i++)//当有相同余数时，停止循环 
		{
			c[i].x = a / b; c[i].y = a % b;
			if (yu[a%b] == 1)
				break;
			else
				yu[a%b]++;
			a = a % b * 10;
		}
		int j, l;
		for (j = 0;; j++)//寻找前一次出现相同余数的位置 
		{
			if (c[j].y == a % b)
			{
				l = i - j;
				break;
			}
		}
			printf("%d/%d = %d.", n, b, d);
			int t;
			for (t = 1; t <= j; t++)
				printf("%d", c[t].x);
			printf("(");
			for (; t <= i; t++)
			{
				if (t == 51)
				{
					printf("..."); break;
				}
				printf("%d", c[t].x);
			}
			printf(")\n   %d = number of digits in repeating cycle\n\n",l);//此题的输出格式给的很模糊，需要在每个output之间加一个blank line 
		memset(c, 0, sizeof(c));
		memset(yu, 0, sizeof(yu));
	}
}
