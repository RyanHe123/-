/*Author:RyanHe123
Date:2019-08-26
Content:Practise 1-5*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;
int main()
{
	const int per_price = 95;
	int n;
	scanf("%d", &n);
	int sum = per_price * n;
	double sum_discount;
	if (sum >= 300)
	{
		sum_discount = sum * 0.85;
	}
	else
	{
		sum_discount = double(sum);
	}
	printf("%.2f", sum_discount);
	getchar();
	getchar();
}
