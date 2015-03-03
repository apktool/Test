// 449.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 100
#include"stdlib.h"
#include"stdio.h"
typedef char Elemtype;
typedef struct BiNode
{
	Elemtype data;
	struct BiNode *lchild, *rchild;
}BiNode, *BiTree;
BiTree CreateBitree()
{
	BiTree p;
	BiTree S[N];
	int i, j;
	Elemtype c;
	printf_s("i and c = ");
	scanf_s("%d%c", &i, &c);
	while (i != 0 && c != '#')
	{
		p = (BiTree)malloc(sizeof(BiNode));
		p->lchild = p->rchild = NULL;
		p->data = c;
		S[i] = p;
		if (i != 1)
		{
			j = i / 2;
			if (i % 2 == 0)
			{
				S[j]->lchild = p;
			}
			else
			{
				S[j]->rchild = p;
			}
		}
		printf_s("i and c = ");
		scanf_s("%d%c", &i, &c);
	}
	return S[1];
}
void preorder(BiTree bt)
{
	if (bt)
	{
		printf_s("%c  ", bt->data);
		preorder(bt->lchild);
		preorder(bt->rchild);
	}
}
void main()
{
	BiTree bt;
	bt = CreateBitree();
	preorder(bt);
	getchar();
}