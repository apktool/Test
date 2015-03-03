// 089.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int n, sum;
	for (n = 1, sum = 0; n <= 20; n++)
	{
		if (n % 3 == 0)
		{
			sum=sum+n;
			printf_s("%d ", n);
		}
	}
	printf_s("\nThe total number is %d", sum);
	getchar();
}