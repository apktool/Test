// 254.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 4
#define N 3
#include"stdio.h"
void main()
{
	int score[M][N];
	int(*ps)[N];
	int i = 1, j;
	printf_s("Input data to array: ");
	for(ps = score; ps < score + M; ps++)
	{
		for (j = 0; j < N; j++)
		{
			scanf_s("%d", *ps + j);
		}
	}
	printf_s("Output data to array: ");
	for (ps = score; ps < score + N; ps++,i++)
	{
		printf_s("\nThe %d score: ", i);
		for (j = 0; j < N; j++)
		{
			printf_s(" %d", *(*ps + j));
		}
	}
	printf_s("\n");
}