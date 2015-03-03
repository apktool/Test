// 234.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a, *pa;
	pa = &a;
	printf_s("The address of a: %p", &a);
	printf_s("\npa = %p", pa);
	printf_s("\nThe address of pa : %p", &pa);
}