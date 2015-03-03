// 265.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	char *weekname[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	char **p = weekname;
	int week;
	printf_s("Please input No. |0---6| : ");
	scanf_s("%d", &week);
	if (week >= 0 && week <= 6)
	{
		printf_s("Week No. is %d and week is %s", week, *(p + week));
	}
	else
	{
		printf_s("Illegal week No.\n");
	}
}