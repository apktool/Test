// 081.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	char ch;
	int num=0;
	do
	{
		ch = getchar();
		num++;
	} while (ch != '\n');
	printf_s("The toal words is: %d", num);
	getchar();
}