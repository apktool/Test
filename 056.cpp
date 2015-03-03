// 056.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"math.h"
int main()
{
	int i;
	printf_s("please input i:");
	scanf_s("%d",&i);
	if(abs(i)<10)
		printf_s("\n%d is one bit",i);
	else if (abs(i)<100)
		printf_s("\n%d is two bit",i);
	else if (abs(i)<1000)
		printf_s("\n%d is three bit",i);
	else if (abs(i)<10000)
		printf_s("\n%d is four bit",i);
	else if (abs(i)<32767)
		printf_s("\n%d is five bit",i);
	else
		printf_s("\n%d is too long",i);
	getchar();
	getchar();
}