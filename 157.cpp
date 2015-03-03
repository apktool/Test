// 157.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 11
#include "stdio.h"
void main()
{
	int a[N] = {};
	int i = 1;
	int x;
	char c;
	int flag = 1, sign = 0, local;
	int low, mid, high;
	printf_s("Please input fisrt number in array: ");
	scanf_s("%d", &a[0]);
	printf_s("Please input array: ");
	while (i < N)
	{
		scanf_s("%d", &a[i]);
		if (a[i-1] < a[i])
			i++;
		else
			printf_s("Please enter this data again.\n");
	}
	printf_s("\n");
	for ( i = 0; i < N; i++)
	{
		printf_s("%6d", a[i]);
	}
	printf_s("\n");
	while (flag)
	{
		printf_s("\nPlease input the number: ");
		scanf_s("%d", &x);
		low = 0;
		mid = 0;
		high = N - 1;
		if (x<a[0] || x>a[N - 1])
		{
			printf_s("\nThe number over the array. ");
		}
		while ((!sign) && (low < high))
		{
			mid = (low + high) / 2;
			if (x ==a[mid])
			{
				local = mid;
				printf_s("\nThe number is found , it is in %d th!", local + 1);
				sign = 1;
			}
			else if (x < a[mid])
			{
				high = mid - 1;
			}
			else if (x > a[mid])
			{
				low = mid + 1;
			}
		}
		//printf_s("\nContinue or not (Y/N): ");
		//scanf_s("%c", &c);
		//c=getchar();
		//if (c == 'n' || c == 'N')
			flag = 0;
	}
	printf_s("\n");
	getchar();
}