#include <stdio.h>

int bitcount(unsigned x)
{
	int b = 0;

	while (x)
	{
		b++;
		x &= x - 1;
	}

	return b;
}

int main()
{
	int x;

	scanf("%d", &x);
	printf("%d\n", bitcount(x));

	return 0;
}
