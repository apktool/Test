// 249.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
int judge(int *a, int n)
{
	int *p, *q;
	p = a;
	q = a + n - 1;
	while (p < q && *p == *q)
	{
		p++;
		q--;
	}
	if (p < q)
		return 0;
	else
		return 1;
}
void main()
{
	int *p;
	int a[N], flag;
	printf_s("Input number: ");
	for (p = a; p < a + N; p++)
	{
		scanf_s("%d", p);
	}
	flag = judge(a, N);
	if (flag)
		printf_s("Yes! ");
	else
		printf_s("Not! ");
}