/*Author:RyanHe123
Date:2019-09-07
Content:Practise 3-11*/
	//a��ǰ��b��ǰ�����Խ��в��룬�������������С���Ƚ��бȽϣ������С�ĳ���
#include<stdio.h>
#include<string.h> 
int main()
{
	char a[200], b[200];
	while (EOF != scanf("%s", a))
	{
		scanf("%s", b);
		int la = strlen(a), lb = strlen(b), s1, s2, s;
		int i, j; int state_2 = 0;
		//a��ǰ 
		for (i = 0; i < la; i++)
		{
			int state = 1;
			for (j = 0; j < lb; j++)
			{
				if (a[i + j] + b[j] - '0' - '0' > 3)
				{
					state = 0;
					break;
				}
			}
			if (state == 1) {
				//����Ϻ����������һ��
				state_2 = 1;
				s1 =( (i + lb)>la? (i + lb):la); break;
			}
			if (state_2 == 0)
				s1 = la + lb;
		}
		state_2 = 0;
		//b��ǰ 
		for (i = 0; i < lb); i++)
		{
			int state = 1;
			for (j = 0; j < la; j++)
			{
				if (b[i + j] + a[j] - '0' - '0' > 3)
				{
					state = 0;
					break;
				}
			}
			if (state == 1)
			{
				state_2 = 1;
				s2 = ((i + la) > lb ? (i + la) : lb);
				break;
			}
			if (state_2 == 0)
			{
				s2 = la + lb;
			}
		}
		if (s1 > s2)s = s2;
		else s = s1;
		printf("%d\n", s);
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
	}
	return 0;
}
