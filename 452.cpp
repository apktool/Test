// 452.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"449.cpp"//createBiTree
#include"450.cpp"//preorder
#include"451.cpp"//inorder
void postorder(Bitree bt)
{
	struct stack
	{
		Bitree link;
		int flag;
	}s[N];
	Bitree p = bt;
	int top = 0, sign;
	if (bt == NULL)
		return;
	while (p || top)
	{
		if (p)
		{
			s[top].link = p;
			s[top++].flag = 1;
			p = p->lchild;
		}
		else
		{
			p = s[--top].link;
			sign = s[top].flag;
			if (sign == 1)
			{
				s[top].link = p;
				s[top++].flag = 2;
				p = p->rchild;
			}
			else
			{
				printf_s("%c  ", p->data);
				p = NULL;
			}
		}
	}
}
void main()
{
	Bitree bt;
	bt = creatbt();
	printf_s("\npreorder:  ");
	preorder(bt);
	printf_s("\ninorder:   ");
	inorder(bt);
	printf_s("\npostorder:\n");
	postorder(bt);
}