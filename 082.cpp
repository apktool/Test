// 082.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	char c;
	int k;
	printf_s("Please input the number:");
	scanf_s("%d", &k);
	getchar();
	printf_s("The word is :");
	do
	{
		c = getchar();
		if ((c >= 'a'&&c <= 'z') ||( c >= 'A'&&c <= 'Z'))
			c = c + k;
	} while (c != '\n');
	printf_s("\nThe word output:%c", c);
	getchar();
}