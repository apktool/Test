// 083.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int m, s = 0;
	printf_s("Please input number:");
	scanf_s("%d", &m);
	do
	{
		s += m % 10;
		m /= 10;
	} while (m>0);
	printf_s("The number is %d", s);
	getchar();
	getchar();
}