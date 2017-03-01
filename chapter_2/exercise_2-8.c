#include <stdio.h>

int rightrot(int, int);

int main()
{
	int x, n;

	printf("x = ");
	scanf("%d", &x);
	printf("n = ");
	scanf("%d", &n);
	printf("%d\n", rightrot(x, n));

	return 0;
}

int rightrot(int x, int n)
{
	int t = ~0u >> 1;

	while (n)
	{
		if (x & 1)
			x = x >> 1 | ~t;
		else
			x = x >> 1 & t;
		n--;
	}

	return x;
}
