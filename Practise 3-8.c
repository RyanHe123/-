/*Author:RyanHe123
Date:2019-09-08
Content:Practise 3-8*/
#include<stdio.h>
#include<string.h>
struct combine
{
	int x, y;
};// ��¼���������� 
combine c[2000] = { 0 }; int yu[3000] = { 0 };//��¼���� ������һ��Ҫ����main���棬��Ȼ������� 
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
		for (i = 1;; i++)//������ͬ����ʱ��ֹͣѭ�� 
		{
			c[i].x = a / b; c[i].y = a % b;
			if (yu[a%b] == 1)
				break;
			else
				yu[a%b]++;
			a = a % b * 10;
		}
		int j, l;
		for (j = 0;; j++)//Ѱ��ǰһ�γ�����ͬ������λ�� 
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
			printf(")\n   %d = number of digits in repeating cycle\n\n",l);//����������ʽ���ĺ�ģ������Ҫ��ÿ��output֮���һ��blank line 
		memset(c, 0, sizeof(c));
		memset(yu, 0, sizeof(yu));
	}
}
