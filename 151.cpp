// 151.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 20
void main()
{
	int i, cout;
	int coutg = 0,cout1=0,coutp=0,coutf=0;
	float rate1, rate2;
	int a[30] = {};
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] >= 85 && a[i] <= 100)
		{
			coutg++;
		}
		else if (a[i] >= 70 && a[i] <= 84)
		{
			cout1++;
		}
		else if (a[i] >= 60 && a[i] < 70)
		{
			coutp++;
		}
		else
		{
			coutf++;
		}
	}
	rate1 = (float)coutg / N;
	rate2 = (float)(N-coutf) / N;
	printf_s("\n 85--100: %d", coutg);
	printf_s("\n 70--84:  %d", cout1);
	printf_s("\n 60--70:  %d", coutp);
	printf_s("\n under 60: %d ", coutf);
	printf_s("\n The greate rate is %f", rate1);
	printf_s("\n The over 60 is %f", rate2);
	printf_s("\n\n");
	for (i = 0; i < N; i++)
	{
		if (a[i] < 60)
		{
			printf_s("%.2d ", a[i]);
		}
	}
	getchar();
}