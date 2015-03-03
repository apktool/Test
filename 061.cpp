// 061.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int i;
	printf_s("please input:");
	scanf_s("%d",&i);
	switch(i)
	{
	case 6:case 7:printf_s("It's time to get up and go to school!");
		break;
	case 8:case 9:case 10:case 11:printf_s("Good morning!");
		break;
	case 12:case 13:printf_s("It's noon.It's time to rest!");
		break;
	case 14:case 15:case 16:case 17:printf_s("Good evening!");
		break;
	case 18:case 19:case 20:case 21:printf_s("It's time to go home and have homework");
		break;
	default:printf_s("Good night");
	}
	getchar();
}