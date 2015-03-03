// 261.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int *seek(int(*pnt_row)[3])
{
	int j = 0, *pnt_col = NULL;
	for (; j < 3; j++)
	{
		if (*(*pnt_row + j) < 60)
		{
			pnt_col = *pnt_row;
		}
	}
	return pnt_col;
}
void main()
{
	int grade[3][3] = { { 56, 65, 75 }, { 65, 75, 85 }, { 75, 80, 90 } };
	int i, j, *pointer = NULL;
	for (i = 0; i < 3; i++)
	{
		pointer = seek(grade + i);
		if (pointer == *(grade + i))
		{
			printf_s("No. %d list : ", i + 1);
			for (j = 0; j < 3; j++)
			{
				printf_s("%d ", *(pointer + j));
			}
		}
		printf_s("\n");
	}
}