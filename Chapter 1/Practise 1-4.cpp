/*Author:RyanHe123
Date:2019-08-26
Content:Practise 1-4*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	double sin_res, cos_res;
	sin_res = sin(2 * 3.141593*n / 360);
	cos_res = cos(2 * 3.141593*n / 360);
	printf("cos%d=%f,sin%d=%f", n, cos_res, n, sin_res);
	getchar();
	getchar();
}
