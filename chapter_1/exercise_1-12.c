#include <stdio.h>

#define IN	1	/* 在单词内 */
#define OUT	0	/* 在单词外 */

void main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN)
				putchar('\n');
			state == OUT;
		}
		else
		{
			putchar(c);
			state = IN;
		}
	}
}
