#include <stdio.h>

void main()
{
	char c;
	long nl = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			nl++;
	printf("%ld\n", nl);
}
