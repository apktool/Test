// 073.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdlib.h"
#include"stdio.h"
void main()
{
	int magic;
	int guess;
	int counter;
	guess = rand();
	magic = rand() - 1;
	counter = 0;
	while (guess != magic)
	{
		printf_s("please input the number:");
		scanf_s("%d", &magic);
		counter++;
		if (magic > guess)
		{
			printf_s("The number is high!\n");
		}
		else if (magic < guess)
		{
			printf_s("The number is low!\n");
		}
	}
	printf_s("The number is right\n");
	printf_s("You try %d time", counter);
	getchar();
	getchar();

}