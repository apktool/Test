// 103.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int n, m = 0;
	printf_s("Please input any number:");
	scanf_s("%d", &n);
	do
	{
		m = m + n % 10;
		n = n / 10;
	} while (n !=0);
	printf_s("The sum is %d", m);
	getchar();
}