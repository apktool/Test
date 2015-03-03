#include"stdio.h"
void hanoi(int, char, char, char);
void move(int, char, char);
int main(int argc, char *argv[])
{
	int n;
	printf_s("Please input n:");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		move(n, x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		move(n, x, z);
		hanoi(n - 1, y, x, z);
	}
}
void move(int n, char x, char y)
{
	printf_s("%d# %c -> %c\n", n, x, y);
}