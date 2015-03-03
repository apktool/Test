// 107.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void main()
{
	int t = 1,i=1;
	float sum = 0,tn;
	do
	{
		t = t*i;
		i++;
		tn = 1 / (float)t;
		sum = sum + tn;
	}while (tn > 1e-6);
	printf_s("%.2f", sum);
	getchar();
}