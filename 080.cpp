// 080.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int main()
{
	long s = 1;
	int j=1;
	while (j<=10)
	{
		s *= j;
		j++;
	}
	printf_s("The finally number is %ld", s);
	getchar();
}