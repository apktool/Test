// 450.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"449.cpp"

void preorder(Bitree bt)
{
	Bitree s[N], p;
	int top = 0;
	if (bt == NULL)
	{
		return;
	}
	p = bt;
	printf_s("\n");
	while (p || top)
	{
		while (p)
		{
			printf_s("%c  ", p->data);
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
			p = p->rchild;
		}
	}
}
void main()
{
	Bitree bt;
	bt = creatbt();
	preorder(bt);
}