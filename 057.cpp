// 057.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
#include"math.h"
void main()
{
	double a,b,c;
	double dsc;//The value
	double re,rm;
	printf_s("please input a,b,c: ");
	scanf_s("%lf%lf%lf",&a,&b,&c);
	if((fabs(a)<=1e-6)&&(fabs(b)<=1e-6))
	{
		printf_s("The equation is degenerate.\n");
	}
	else if(fabs(a)<=1e-6)
	{
		printf_s("single root X=%f\n",-c/b);
	}
	else if(fabs(c)<=1e-6)
	{
		printf_s("Two root X1=%f\tx2=%f\t\n",0.0,-b/a);
	}
	else
	{
		re=-b/2*a;
		dsc=pow(b,2)-4*a*c;
		rm=sqrt(dsc)/2.0;
		if(dsc>=0.0)
		{
			printf_s("The root X1=%f\tX2=%f\n",re+rm,re-rm);
		}
		else
		{
			printf_s("The complex root X1=%f+%fi\tX2=%f-%fi\n",re,rm,re,rm);
		}
		getchar();
	}
}