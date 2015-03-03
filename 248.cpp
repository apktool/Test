// 248.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void swap(int *pa, int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int max(int *p, int n)
{
	int *pa, *pb;
	pb = p;
	for (pa = p; pa < p + n; pa++)
	{
		if (*pa > *pb)
		{
			pb = pa;
		}
	}
	return pb - p;
}
void main()
{
	int a[N], b[N / 2];
	int *p;
	int k1, k2;
	printf_s("Input number to a:");
	for (p = a; p < a + N; p++)
	{
		scanf_s("%d", p);
	}
	printf_s("Input number to b:");
	for (p = b; p < b + N / 2; p++)
	{
		scanf_s("%d", p);
	}
	printf_s("The great number is finding ...\n");
	k1 = max(a, N);
	k2 = max(b, N / 2);
	printf_s("Swaping number ...\n");
	swap(&a[k1], &b[k2]);
	printf_s("Output number to a:");
	for (p = a; p < a + N; p++)
	{
		printf_s("%d  ", *p);
	}
	printf_s("\n");
	printf_s("Output number to b:");
	for (p = b; p < b + N / 2; p++)
	{
		printf_s("%d  ", *p);
	}
}