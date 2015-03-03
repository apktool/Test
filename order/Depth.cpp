int BtDepth(Bitree bt)
{
	int ldep, rdep;
	if (bt == NULL)
	{
		return 0;
	}
	ldep = BtDepth(bt->lchild);
	rdep = BtDepth(bt->rchild);
	if (ldep > rdep)
	{
		return ldep + 1;
	}
	else
	{
		return rdep + 1;
	}
}