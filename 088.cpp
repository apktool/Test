// 088.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int n, sum = 0;
	for (n = 0; n <= 100; n += 2)
		sum = sum + n;
	printf_s("The total number is %d", sum);
	getchar();

}