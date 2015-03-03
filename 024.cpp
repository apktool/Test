// 024.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void  main(){
	int x,y,z;						/*定义整型变量*/
	x=y=z=2;						/*赋值*/
	++x||++y&&++z;				/*逻辑运算*/
	printf("x=%d,y=%d,z=%d\n",x,y,z);	/*输出x，y，z*/
	x=y=z=2;						/*再次赋值*/
	++x&&++y||++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=y=z=2; 						/*再次赋值*/
	++x&&++y&&++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=y=z=-1;						/*再次赋值*/
	++x||++y&&++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=y=z=-1; 					/*再次赋值*/
	++x && ++y&&++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=y=z=-1; 					/*再次赋值*/
	++x && ++y||++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	getchar();

}
