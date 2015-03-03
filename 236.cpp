// 236.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void main()
{
	int a, b, m;
	int *pa, *pb, *p = &m;
	char c = 'a', *pc = &c;
	pa = &a, pb = &b;
	printf_s("\nInput three data: ");
	scanf_s("%d%d%d", pa, pb, p);
	printf_s("Output  the data: %d %d %d", *pa, *pb, *p);
	pb = (int *)pc;
	printf_s("\nOutput data 4 %c %c", *pb, *pc);
}