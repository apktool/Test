// 238.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a[5];
	int i;
	int *p;
	for (i = 0; i < 5; i++)
	{
		a[i] = i + 2;
	}
	p = &a[1];
	printf_s("The address %x, the data is %d.\n", p, *p);
	p++;
	printf_s("The address %x, the data is %d.\n", p, *p);
	p = &a[1];
	printf_s("The address %x, the data is %d.\n", p, *p++);
	p = &a[1];
	printf_s("The address %x, the data is %d.\n", p, *++p);
	getchar();
}