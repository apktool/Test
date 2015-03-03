// 030.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include "math.h"
void main()
{
	float arc;
	float f,b,x;
	int i;
	printf_s("input arc: ");
	scanf_s("%f",&arc);
	f=sin(arc);
	printf_s("sin(%3.1f)=%f \n",arc,f);
	printf_s("input b,x: ");
	scanf_s("%f%f",&b,&x);
	f=log(x)/log(b);
	printf_s("log%2.1f(%2.1f)=%2.2f",b,x,f);
	i=floor(x);
	printf_s("\n\nfloor(%3.0f)=%d",x,i);
	getchar();
	getchar();
}