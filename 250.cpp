// 250.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void convert(char s[], int n)
{
	int i;
	if ((i = n / 10) != 0)
	{
		convert(s + 1, i);
	}
	*s = n % 10 + '0';
}
void main()
{
	int num;
	char str[10] = "";
	printf_s("Input interger data: ");
	scanf_s("%d", &num);
	convert(str, num);
	printf_s("Output string: ");
	puts(str);
}