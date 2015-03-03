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