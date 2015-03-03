// 102.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int score, sum = 0;
	float aver = 0;
	int n=0,i=0;
	printf_s("The system will quit when you input '-1'!\n");
	do
	{
		printf_s("\nPlease input the score : ");
		scanf_s("%d", &score);
		if (score == -1)
			break;
		else
		{
			n++;
			sum += score;
		}
		if (score < 60)
			i++;
	} while (1);
	printf_s("\nThe sum is %d", sum);
	printf_s("\nThe aver is %f", (float)sum / n);
	printf_s("\nThe text is fail have %d people!",i);
	getchar();
}