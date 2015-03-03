// 060.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	char i;
	printf_s("please input '0'----'9' number:");
	i=getchar();
	switch(i)
	{
	case '0':printf_s("Sunday\n");
		break;
	case '1':printf_s("Monday\n");
		break;
	case '2':printf_s("Tuesday\n");
		break;
	case '3':printf_s("Wednesday\n");
		break;
	case '4':printf_s("Thursday\n");
		break;
	case '5':printf_s("Friday\n");
		break;
	case '6':printf_s("Saturday\n");
		break;
	default:printf_s("error!");
	}
	getchar();
}