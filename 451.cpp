// 451.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"449.cpp"
#include"450.cpp"
void inorder(Bitree bt)
{
	Bitree s[N], p;
	int top = 0;
	if (bt == NULL)
		return;
	p = bt;
	printf_s("\n");
	while (p || top)
	{
		while (p)
		{
			s[top++] = p;
			p = p->lchild;
		}
		if (top <= 0)
		{
			return;
		}
		else
		{
			p = s[--top];
			printf_s("%c  ", p->data);
			p = p->rchild;
		}
	}
}
void main()
{
	Bitree bt;
	bt = creatbt();
	printf_s("\npreorder: ");
	preorder(bt);
	printf_s("\ninorder:  ");
	inorder(bt);
}