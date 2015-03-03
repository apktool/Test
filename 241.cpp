// 241.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void swaps(int *p1, int *p2)
{
	int temp;
	temp = *p1; *p1 = *p2; *p2 = temp;
}
void exchange(int *p1, int *p2, int *p3)
{
	if (*p1 < *p2)swaps(p1, p2);
	if (*p1 < *p3)swaps(p1, p3);
	if (*p2 < *p3)swaps(p2, p3);
}
void main()
{
	int a, b, c;
	int *p1, *p2, *p3;
	printf_s("Please input three number: ");
	scanf_s("%d%d%d", &a, &b, &c);
	p1 = &a; p2 = &b; p3 = &c;
	exchange(p1, p2, p3);
	printf_s("The final number is %d, %d, %d", a, b, c);
}