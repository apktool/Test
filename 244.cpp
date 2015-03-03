// 244.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void main()
{
	float a[N];
	float ave = 0, *p;
	for (p = a; p < a + N; p++)
	{
		scanf_s("%f", p);
		if (*p>0)
		{
			ave += *p;
		}
	}
	ave /= N;
	printf_s("Output....\n");
	for (p = a; p < a + N; p++)
	{
		if (*p>ave)
		{
			printf_s("%.2f  ", *p);
		}
	}

}