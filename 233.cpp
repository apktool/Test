// 233.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int num_int = 12, *p_int;
	int num_f = 3.14, *p_f;
	char num_ch = 'p', *p_ch;

	p_int = &num_int;
	p_f = &num_f;
	p_ch = &num_ch;

	printf_s("num_int = %d ,*p_int = %d \n", num_int, *p_int);
	printf_s("num_f = %4.2f ,*p_f = %4.2f \n", num_f, *p_f);
	printf_s("num_int = %c ,*p_int = %c \n", num_ch, *p_ch);

	getchar();
}