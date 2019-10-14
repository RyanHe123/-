/*Author:RyanHe123
Date:2019-08-26
Content: Practise 1-7*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int year;
	scanf("%d", &year);
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
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
		if (year % 4 == 0)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	getchar();
	getchar();
}

