// 024.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void  main(){
	int x,y,z;						/*�������ͱ���*/
	x=y=z=2;						/*��ֵ*/
	++x||++y&&++z;				/*�߼�����*/
	printf("x=%d,y=%d,z=%d\n",x,y,z);	/*���x��y��z*/
	x=y=z=2;						/*�ٴθ�ֵ*/
	++x&&++y||++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=y=z=2; 						/*�ٴθ�ֵ*/
	++x&&++y&&++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=y=z=-1;						/*�ٴθ�ֵ*/
	++x||++y&&++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=y=z=-1; 					/*�ٴθ�ֵ*/
	++x && ++y&&++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=y=z=-1; 					/*�ٴθ�ֵ*/
	++x && ++y||++z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	getchar();

}
