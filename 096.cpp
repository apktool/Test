// 096.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int i, j;
	int m=0;
	for (i = 1; i <= 50; i++)
	{
		m = m + i*i;
	}
	printf_s("The sum is : %d", m);
	getchar();
}