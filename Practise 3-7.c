/*Author:RyanHe123
Date:2019-09-05
Content:Practise 3-7*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int t;
	for (t = 0; t < n; t++)
	{
		int m, n;
		scanf("%d %d", &m, &n);
		char s[50][1100];
		int i,j;
		for (j = 0; j < m; j++)
			scanf("%s", s[j]);
		//读取字符串，二维数组 
		
		int sum = 0;
		for (j = 0; j < n; j++)
		{
			int a[4] = { 0 };
			for (i = 0; i < m; i++)
			{
				
				//逐位读取出现次数 
				switch (s[i][j])
				{
				case'A':a[0]++; break;
				case'C':a[1]++; break;
				case'G':a[2]++; break;
				case'T':a[3]++; break;
				}
			}
			int max = 0, index = 0;
			int z;
			//找到出现次数最多的字母 
			for (z = 0; z < 4; z++){
				if(a[z]==max)
				{
					if(z<index)
					index=z;
				}
				if (a[z] > max)
				{
					index=z;
					max = a[z];  // 如果出现次数相同输出字典序小的解 
				}
			}
			sum += m - max;	
			switch (index)
			{
			case 0:putchar('A'); break;
			case 1:putchar('C'); break;
			case 2:putchar('G'); break;
			case 3:putchar('T'); break;
			}
		}
		printf("\n%d\n", sum);
	}

}
