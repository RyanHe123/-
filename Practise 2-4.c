/*Author:RyanHe123
Date:2019-08-31
Content:Practise 2-4
*/
#include<stdio.h>
int main()
{
	int n,m;
	int kase=0;
	while(scanf("%d %d",&n,&m)==2&&n&&m)
	{
		int i;
		double sum=0.0;
		for(i=n;i<m+1;i++)
		{
			sum+=(double)1/i/i;
			//�˴����ʹ�ã�i*i�������ݻ���� 
		}
		printf("Case %d: %.5lf\n",++kase,sum);
	}
}
