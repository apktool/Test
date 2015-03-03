// 084.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"math.h"
#include"stdio.h"
void main()
{
	double x1=1.5, x;
	double f1, f;
	do
	{
		x = x1;
		f = (2 * x*x*x) + (4 * x*x) - (7 * x) - 34;
		f1 = (6 * x*x) + (8 * x) - 7;
		x1 = x - f / f1;
	} while (x1 != x);
	//while (fabs(x1 - x) >= 1e-5);
	printf_s("The nubmer is %lf", x1);
	getchar();
}