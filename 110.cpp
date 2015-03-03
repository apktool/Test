// 110.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void main()
{
	int n;
	float sum = 100;
	float a = sum/2;
	for (n = 1; n <= 10; n++)
	{
		sum = sum + 2*a;
		a = a / 2;
	}
	printf_s("%f\t%f", sum, a);
	getchar();
}