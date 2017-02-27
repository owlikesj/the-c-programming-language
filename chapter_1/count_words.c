#include <stdio.h>

#define IN	1	/* 在单词内 */
#define OUT	0	/* 在单词外 */

// 遇到一个非空字符，且前一个字符是空白字符，则计入一个单词
void main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		nc++;
		if (c == '\n')
			nl++;
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if (state == OUT)
		{
			nw++;
			state = IN;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
