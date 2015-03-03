
void preorder(Bitree bt){
	if (bt)
	{
		printf_s("%c  ", bt->data);
		preorder(bt->lchild);
		preorder(bt->rchild);
	}	
}
/*
void inorder(Bitree bt)
{
	if (bt)
	{
		inorder(bt->lchild);
		printf_s("%c  ", bt->data);
		inorder(bt->rchild);
	}
}

void postorder(Bitree bt)
{
	if (bt)
	{
		postorder(bt->lchild);
		postorder(bt->rchild);
		printf_s("%c  ", bt->data);
	}
}*/