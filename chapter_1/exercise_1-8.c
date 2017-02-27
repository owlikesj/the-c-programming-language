#include <stdio.h>

void main()
{
	char c;
	long nl = 0, ns = 0, nt = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			nl++;
		else if (c == '\t')
			nt++;
		else if (c == ' ')
			ns++;
	printf("space: %ld\ntab: %ld\nnewline: %ld\n", ns, nt, nl);
}
