// 058.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include"stdio.h"
int main()
{
	int i,flag;
	printf_s("please input the year:");
	scanf_s("%d",&i);
	if(i%4==0&&i%100!=0)
	{
		flag=1;
	}
	else if(i%400==0)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
	if(flag)
	{
		printf_s("The year is leap year");
	}
	else
	{
		printf_s("The year is not leap year");
	}
	getchar();
}
