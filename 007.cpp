// 007.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define PI 3.14
#include"stdio.h"
void main()
{
	float r,area,c;
	printf_s("please input r:");
	scanf_s("%f",&r);
	area=PI*r*r;
	c=2*PI*r;
	printf_s("\narea=%f\nc=%f",area,c);
	getchar();
	getchar();
}
