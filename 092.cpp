// 092.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

//2000~2050
#include"stdio.h"
void main()
{
	int year;
	for (year = 2000; year <= 2050; year++)
	{
		if (((year % 4 == 0 )&& (year % 100 != 0) )|| (year % 400 ==0))
		{
			printf_s("%d  ", year);
		}
	}
	getchar();
}