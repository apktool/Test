// 240.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int x = 10, a[5];
	int i, *p;
	printf_s("Please input the array: ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	p = NULL;
	for (i = 0; i < 5; i++)
	{
		if (a[i] == x)
		{
			p = &a[i];
		}
	}
	if (p != NULL)
	{
		printf_s("The %d is in the array, Its address is %x", x, p);
	}
	else
	{
		printf_s("The %d is not in the array.", x);
	}
}