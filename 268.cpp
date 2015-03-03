// 268.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 7
#include"stdio.h"
void main()
{
	int a[N + 1], b[N + 1], c[N + 1];
	int i, j, k, sm, num = 1;
	int *p1 = a + 1, *p2 = b + 1, *p3 = c + 1;
	for (i = 1; i < N + 1; i++)
	{
		scanf_s("%d", p1++);
		*p2++ = *p3++ = 0;
	}
	p1 = a, p2 = b, p3 = c;
	for (i = 1; i <= N; i++)
	{
		if (*(p2 + i) == 0)
		{
			sm = *(p1 + i);
			k = 1;
			*(p3 + k) = i;
			for (j = i + 1; j <= N; j++)
			{
				if (*(p2 + j) == 0)
				{
					if (sm > *(p1 + j))
					{
						sm = *(p1 + j);
						k = 0;
						p3[++k] = j;
					}
					else if (sm == *(p1 + j))
					{
						p3[++k] = j;
					}
				}	
			}
			for (j = 1; j <= k; j++)
			{
				p2[*(p3 + j)] = num;
			}
			num++;
			i = 0;
		}
	}
	printf_s("after the sorting ... \n");
	for (j = 1; j <= N; j++)
	{
		printf_s("%2d %4d %4d\n", j, a[j], b[j]);
	}
}