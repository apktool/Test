// 259.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int max(int a, int b)
{
	return a > b ? a : b;
}
int sum(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
void operate(int x, int y, int (*fun)(int, int))
{
	printf_s("%d\n", (*fun)(x, y));
}
void main()
{
	int a, b;
	printf_s("Please input 'a' and 'b' : ");
	scanf_s("%d%d", &a, &b);
	printf_s("MAX = ");
	operate(a, b, max);
	printf_s("SUM = ");
	operate(a, b, sum);
	printf_s("SUB = ");
	operate(a, b, sub);
}