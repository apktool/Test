// 074.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int n=7;
	while((n%2!=1)||(n%3!=2)||(n%5!=4)||(n%6!=5))
	{
		n+=7;
	}
	printf_s("%d",n);
	getchar();
}