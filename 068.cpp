// 068.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a,b,c,max;
	printf_s("please input three number:");
	scanf_s("%d%d%d",&a,&b,&c);
	if(a>b)
		max=a;
	else
		max=b;
	if(max<c)
		max=c;
	printf_s("The max number is %d",max);
	getchar();
	getchar();
}