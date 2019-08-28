/*Author:RyanHe123
Date:2019-08-26
Content:Practise 1-6
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void exchange(int &a, int&b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b)
	{
		exchange(a, b);
	}
	if (b >= c)
	{
		exchange(b, c);
	}
	if (a >= b)
	{
		exchange(a, b);
	}
	if (a + b > c)
	{
		if (a * a + b * b == c * c)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	else
	{
		printf("not a triangle\n");
	}
	getchar();
	getchar();
}
