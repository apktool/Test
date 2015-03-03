// 277.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	char c[] = "BASIC\ndBASE";
	char st[5];
	char st1[6], st2[6], st3[6], st4[6];

	printf_s("%s\n", c);

	printf_s("input string:");
	scanf_s("%s", st);
	printf_s("%s\n", st);

	printf_s("input string: ");
	scanf_s("%s%s%s%s", st1, st2, st3, st4);
	printf_s("%s %s %s %s\n", st1, st2, st3, st4);

	printf_s("input string: ");
	gets_s(st);
	puts(st);
	puts(c);
}