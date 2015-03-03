// 219.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int peach(int day)
{
	int x;
	if (day == 10)
	{
		x = 1;
	}
	else
	{
		x = 2 * (peach(day + 1) + 1);
	}
	return x;
}
void main()
{
	int x = 1;
	x = peach(x);
	printf_s("The toal peach is %d", x);
	return;
}