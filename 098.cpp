// 098.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

//100006~99996  %3==0
#include"stdio.h"
void main()
{
	int  m,n, count=0;
	for (m = 1000; m <= 9999; m++)
	{
		n = m * 10 + 6;
		if (n % 3 == 0)
		{
			count++;
			//printf_s("%d", n);
		}
	}
	printf_s("%d", count);
	getchar();

}