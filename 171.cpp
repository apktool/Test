// 171.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int i, j;
	float sc = 0,st = 0;
	float averc[3], avert = 0;
	float a[5][3] = { { 80, 75, 92 }, { 61, 65, 71 }, { 59, 63, 70 }, { 85, 87, 90 }, { 76, 77, 85 } };
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 5; i++)
		{
			sc = sc + a[i][j];
		}
		averc[j] = sc / 5;
		sc = 0;
	}
	avert = (averc[0] + averc[1] + averc[2]) / 3;
	printf_s("math: %.0f\nchinese: %.0f\nenglish: %.0f\n", averc[0], averc[1], averc[2]);
	printf_s("toal: %.0f\n", avert);
	getchar();
}