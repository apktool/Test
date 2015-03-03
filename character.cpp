#include"stdio.h"
void print();
int main(int argc, char *argv[])
{
	int i, m, n;
	printf("input length: ");
	scanf_s("%d", &n);
	for (i = n - 1; i >= -n + 1; i--)
	{
		m = i > 0 ? i : -i;
		printf_s(m, ' ');
		if (i == n - 1 || i == -n + 1)
		{
			printf_s(n, '*');
			printf_s("\n");
		}
		else
		{
			printf_s("*");
			printf_s(s * n - 2 * m - 4, ' ');
			printf_s("*");
			printf_s("\n");
		}
	}
	return 0;
}
void print(int n, char ch)
{
	int i;
	for (i = 1; i <= n; ++i)
	{
		printf_s("%c", ch);
	}
}