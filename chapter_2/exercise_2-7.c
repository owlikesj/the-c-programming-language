#include <stdio.h>

int invert(int x, int p, int n)
{
	int y = ~(~0 << n) << (p + 1 - n);

	return (x & ~y) | (~x & y);
}

void main()
{
	printf("%d\n", invert(0255, 4, 3));
}
