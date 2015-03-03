// 108.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void main()
{
	float f1 = 2, f2 = 1, sum=0,sign=1, t;
	int n;
	for (n = 1; n <= 10; n++)
	{
		sum = sum + sign*f1 / f2;
		sign = sign*(-1);
		t = f2;
		f2 = f1;
		f1 = f1 + t;
	}
	printf_s("%f", sum);
	getchar();
}