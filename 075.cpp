// 075.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int m, n;
	int flag = 1;
	printf_s("please input the number:");
	scanf_s("%d", &n);
	for (m = 2; m < n&&flag; m++)
	{
		if (n%m == 0)
			flag = 0;
	}
	if (flag == 0)
		printf_s("The number is not prime");
	else
		printf_s("The number is prime");
	getchar();
	getchar();

}