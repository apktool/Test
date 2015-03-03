// 243.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a[10], i, *p;
	for (p =a; p < a + 10; p++)
	{
		scanf_s("%d", p);
	}
	printf_s("The element of a: \n");
	p = a;
	for (i = 0; i < 10; i++)
	{
		printf_s("a[%d]=%d\n", i, *p++);
	}
}