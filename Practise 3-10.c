/*Author:RyanHe123
Date:2019-09-06
Content:Practise 3-10
Version:2*/
struct rectangle
{
	int x, y;
};
void internal_swap(struct rectangle &r1)
{
	if (r1.x > r1.y)
	{
		int temp;
		temp = r1.x;
		r1.x = r1.y;
		r1.y = temp;
	}
}
void external_swap(rectangle &r1, rectangle &r2)
{
	if (r1.x > r2.x)
	{
		rectangle temp;
		temp = r1;
		r1 = r2;
		r2 = temp;
	}
	if (r1.x == r2.x&&r1.y > r2.y)
	{
		rectangle temp;
		temp = r1;
		r1 = r2;
		r2 = temp;
	}
}
#include<stdio.h>
int main()
{
	rectangle rec[6];
	while (scanf("%d %d", &rec[0].x,&rec[0].y)!=EOF)
	{
		internal_swap(rec[0]);
		int i;
		for (i = 1; i < 6; i++)
		{
			scanf("%d %d", &rec[i].x,&rec[i].y);
			internal_swap(rec[i]);
		}
		int j;
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5 - i; j++)
			{
				external_swap(rec[j], rec[j + 1]);
			}
		}
		int state = 1;
		for (i = 0; i < 6; i += 2)
		{
			if (rec[i].x != rec[i + 1].x || rec[i].y != rec[i + 1].y)
				state = 0;
		}
		if (rec[0].x != rec[2].x || rec[0].y != rec[4].x || rec[2].y != rec[4].y)
			state = 0;
		if (state == 1)
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
}

