// 029.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include "stdlib.h"
#include "time.h"
void main()
{
	int a,b;
	int sum;
	a=rand()%100;
	srand((int)time(0));
	b=rand()%100;
	sum=a+b;
	printf_s("%d+%d=%d ",a,b,sum);
	//scanf_s("%d",&sum);
	if(sum==a+b)
	{
		printf_s("\nAnswer is turn\n");
	}
	else
	{
		printf_s("Answer is false\n");
	}
	getchar();
}