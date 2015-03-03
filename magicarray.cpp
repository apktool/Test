#include"stdio.h"
#define N 10
int main()
{
	int i = 0, j, n, k = 1;
	int a[N][N] = { 0 };
	printf_s("Please input ODD n:");
	scanf_s("%d", &n);
	j = n / 2;
	for (k = 1; k <= n*n; k++)
	{
		a[i][j] = k;
		if (k % n == 0)
		{
			i = i + 1;
			continue;
		}
		i--;
		j++;
		if (i == -1)
		{
			i = i + n;
		}
		if (j > n - 1)
		{
			j = j - n;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf_s("%3d", a[i][j]);
		}
		printf_s("\n");
	}
}