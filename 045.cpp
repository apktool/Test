// 045.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	double x;
	printf_s("please input double nubmer:");
	scanf_s("%lf", &x);
	x = (int)(x * 100 + 0.5);
	x /= 100;
	printf_s("The number output is %.2f", x);
	getchar();
	getchar();
}