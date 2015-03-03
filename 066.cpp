// 066.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int month,year,day,sum,leap;
	printf_s("please input year,month,day:");
	scanf_s("%d%d%d",&year,&month,&day);
	switch(month)
	{
	case 1:sum=0;break;
	case 2:sum=31;break;
	case 3:sum=59;break;
	case 4:sum=90;break;
	case 5:sum=120;break;
	case 6:sum=151;break;
	case 7:sum=181;break;
	case 8:sum=212;break;
	case 9:sum=243;break;
	case 10:sum=273;break;
	case 11:sum=304;break;
	case 12:sum=334;break;
	default:printf_s("The month is fault");
	}
	sum=sum+day;
	if(year%400==0||(year%4==0&&year%100!=0))
		leap=1;
	else
		leap=0;
	if(leap==1&&month>2)
		sum+=1;
	printf_s("It's %dth day in %d year",sum,year);
	getchar();
	getchar();
}