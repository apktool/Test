// 086.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int x, n;
	printf_s("please input the number:");
	scanf_s("%d", &x);
	do
	{
		n = x % 10;
		printf_s("%d", n);
		x = x / 10;
	} while (x != 0);
	getchar();
	getchar();
}