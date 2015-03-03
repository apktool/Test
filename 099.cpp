// 099.cpp : 定义控制台应用程序的入口点。
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
	for (i = 1; i < 316; i++)
	{
		if (((316 - i * 13) % 11 == 0) && (316-i*13)>0)
			printf_s("%d+%d=316\n", i*13,316-i*13);
	}
	getchar();
}