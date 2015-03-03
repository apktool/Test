#include"CreateBiTree.cpp"
#include"PreOrder.cpp"
#include"InOrder.cpp"
#include"PostOrder.cpp"
#include"Depth.cpp"
//#include"Recrsion.cpp"

void main()
{
	int depth;
	Bitree bt;
	bt = creatbt();
	printf_s("\npreorder:  ");
	preorder(bt);
	printf_s("\ninorder:   ");
	inorder(bt);
	printf_s("\npostorder:\n");
	postorder(bt);
	printf_s("\n\n");
	depth = BtDepth(bt);
	printf_s("\ndepth = %d  ", depth);
}