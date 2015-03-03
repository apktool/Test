#include"stdio.h"
void operation(int, int, int(*)(int, int));
int max(int, int);
int sub(int, int);
int mul(int, int);
int main(int argc, int argv[])
{
	int x, y;
	printf_s("Please input x,y: ");
	scanf_s("%d%d", &x, &y);
	printf_s("Max = ");
	operation(x, y, max);
	printf_s("Sub = ");
	operation(x, y, sub);
	printf_s("Mul = ");
	operation(x, y, mul);
}
void operation(int x, int y, int(*p)(int, int))
{
	int z;
	z = (*p)(x, y);
	printf_s("%d\n", z);
}
int max(int x, int y)
{
	return x > y ? x : y;
}
int sub(int x, int y)
{
	return x + y;
}
int mul(int x, int y)
{
	return x*y;
}