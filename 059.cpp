// 059.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	float a,b,c,d;
	float min,max;
	float aver,sum;
	printf_s("please input a,b,c,d:");
	scanf_s("%f%f%f%f",&a,&b,&c,&d);
	sum=a+b+c+d;
	aver=sum/4;
	printf_s("\nThe sum is %f",sum);
	printf_s("\nThe aver is %f",aver);
	min=a;
	max=a;
	if(b<min)
		min=b;
	else if(b>max)
		max=b;
	if(c<min)
		min=c;
	else if(c>max)
		max=c;
	if(d<min)
		min=d;
	else if(d>max)
		max=d;
	printf_s("\nThe max number is %f",max);
	printf_s("\nThe min number is %f",min);
	getchar();
}