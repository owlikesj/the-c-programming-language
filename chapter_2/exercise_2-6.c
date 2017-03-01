#include <stdio.h>

int setbits(int x, int p, int n, int y)
{
	x &= ~(~(~0 << n) << (p + 1 - n));
	y &= ~(~0 << n);

	return x | y;
}

void main()
{
	printf("%d\n", setbits(13, 2, 3, 2));
}
