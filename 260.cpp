// 260.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
float *search(float(*p)[4])
{
	float *pt = NULL;
	int j;
	for (j = 0; j < 4; j++)
	{
		if (*(*p + j) < 60)
		{
			pt = *p;
		}
	}
	return pt;
}
void main()
{
	static float score[][4] = { 70, 52, 68, 89, 88, 74, 85, 96, 64, 55, 53, 78 };
	float *prt = NULL;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		prt = search(score + i);
		if (prt == *(score + i))
		{
			printf_s("No. %d is fail. his score is : ",i);
			for (j = 0; j < 4; j++)
			{
				printf_s("%5.2f ", *(prt + j));
			}
		}
		printf_s("\n");
	}
}