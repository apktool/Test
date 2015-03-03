// 038.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include "stdio.h"
int main()
{
	int i,a,b,c;
	printf_s("please input number(100~999)");
	scanf_s("%d",&i);
	a=i/100;
	b=i/10%10;
	c=i%10;
	printf("a=%d\tb=%d\tc=%d",a,b,c);
	getchar();
	getchar();
}