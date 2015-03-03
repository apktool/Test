#include"stdio.h"
#include"stdlib.h"
#define N 100

typedef struct node{
	char data;
	struct node *lchild, *rchild;
}Bitnode, *Bitree;

Bitree creatbt()
{
	Bitree p;
	Bitree s[N];
	int i, j;
	char c;
	printf_s("i and c = ");
	scanf_s("%d%c", &i, &c);
	while (i != 0 && c != '#')
	{
		p = (Bitree)malloc(sizeof(Bitnode));
		p->data = c;
		p->lchild = p->rchild = NULL;
		s[i] = p;
		if (i != 1)
		{
			j = i / 2;
			if (i % 2 == 0)
			{
				s[j]->lchild = p;
			}
			else
			{
				s[j]->rchild = p;
			}
		}
		printf_s("i and c = ");
		scanf_s("%d%c", &i, &c);
	}
	return s[1];
}