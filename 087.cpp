// 087.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int n=0,ch;
	printf_s("Please input serise of words:");
	do
	{
		ch = getchar();
		if (ch >= 'A'&&ch <= 'Z')
		{
			n++;
		}
	} while (ch != '\n');
	printf_s("The words total have %d number.", n);
	getchar();

}