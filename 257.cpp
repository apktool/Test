// 257.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
float avearray(float *p, int n)
{
	float *q;
	float sum = 0, ave;
	for (q = p + n - 1; p < q; p++)
	{
		sum = sum + *q;
	}
	ave = sum / n;
	return ave;
}
void output(float(*p)[4], int n)
{
	int i, j, k;
	for (i = 0; i < n; i++, p++)
	{
		k = 0;
		for (j = 0; j < 4; j++)
		{
			if (*(*p + j) <= 60)
			{
				k++;
			}
		}
		if (k >= 2)
		{
			printf_s("No. %d fail, The socre is:\n", i);
			for (j = 0; j < 4; j++)
			{
				printf_s("%4.1f\n", *(*p + j));
			}
		}
	}
}
void main()
{
	float score[3][4] = { 65, 20, 30, 60, 80, 87, 90, 81, 90, 56, 45, 98 };
	float av;
	av = avearray(*score, 12);
	printf_s("The average is %4.2f\n", av);
	output(score, 3);
}