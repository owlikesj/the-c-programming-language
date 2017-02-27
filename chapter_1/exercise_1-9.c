#include <stdio.h>

void main()
{
	char c, lc;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' && lc == ' ')
			;
		else
			putchar(c);
		lc = c;
	}
}
