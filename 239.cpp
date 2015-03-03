// 239.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	char s[20], *p;
	printf_s("Please input string: ");
	gets_s(s);
	for (p = s; *p != '\0'; p++);
	printf_s("The length of string is %d", p - s);
}