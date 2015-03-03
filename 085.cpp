// 085.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a, b;
	char ch;
	do
	{
		printf_s("\n------------------------");
		printf_s("\n\t1:+");
		printf_s("\n\t2:-");
		printf_s("\n\t3:*");
		printf_s("\n\t4:/");
		printf_s("\n\t5:quit!");
		printf_s("\n------------------------");
		printf_s("\nPlease input choice:");
		ch = getchar();
		getchar();
		if (ch != '5')
		{
			printf_s("\nPlease input two number:");
			scanf_s("%d%d", &a, &b);
			getchar();
			switch (ch)
			{
			case '1':printf_s("a+b=%d", a + b);
				break;
			case '2':printf_s("a-b=%d", a - b);
				break;
			case '3':printf_s("a x b=%d", a*b);
				break;
			case '4':printf_s("a/b=%d", a / b);
				break;
			default:
				printf_s("The choice is error!");
			}
		}
		else
		{
			printf_s("\nThe system will quit!");
			break;
		}
	}while(1);
}