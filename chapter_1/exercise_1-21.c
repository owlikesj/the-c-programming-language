#include <stdio.h>
#define TAB 8

/* 空格串替换成最少数量的制表符和空格 */
int main()
{
	char c;
	int in, col, ls, nt, ns, i;

	in = col = ls = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			in = 1;
			ls++;
		}
		else if (in == 1)
		{
			if ((ns = (col + ls) % TAB) > ls)
				ns = ls;
			nt = (ls - ns) / TAB;
			if ((ls - ns) % TAB > 0)
				nt++;
			for (i = 0; i < nt; i++)
				putchar('\t');
			for (i = 0; i < ns; i++)
				putchar(' ');
			putchar(c);
			if (c == '\n')
				col = 0;
			else
				col += ls + 1;
			ls = in = 0;
		}
		else
		{
			putchar(c);
			if (c == '\n')
				col = 0;
			else
				col++;
		}
	}

	return 0;
}
