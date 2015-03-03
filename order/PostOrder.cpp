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