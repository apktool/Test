// 094.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int f1=1, f2=1, f3;
	int i, n = 2;
	printf_s("%d\t%d\t",f1,f2);
	for (i = 2; i <= 40; i++)
	{
		if (n % 4 == 0)
		{
			printf_s("\n");
		}
		f3 = f1 + f2;
		printf_s("%d\t",f3);
		f1 = f2;
		f2 = f3;		
		n++;
	}
}