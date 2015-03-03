// 158.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void main()
{
	int i;
	float sum = 0;
	float aver;
	float a[N] = {};
	printf_s("Please input the array: ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%f", &a[i]);
		sum += a[i];
	}
	aver = (float)sum / N;
	printf_s("\nThe aver is %f ", aver);
	printf_s("\nIt over aver's number is : ");
	for (i = 0; i < N; i++)
	{
		if (a[i]>aver)
		{
			printf_s("%5.2f  ", a[i]);
		}
	}
	printf_s("\n");
	getchar();
}