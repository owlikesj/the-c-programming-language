#include <stdio.h>
#define TAB 8

/* 制表符替换成适当数目的空格 */
int main()
{
	char c;
	int col = 0, ns, i;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			putchar(c);
			col = 0;
		}
		else if (c == '\t')
		{
			ns = TAB - (col % TAB);
			for (i = 0; i < ns; i++)
				putchar(' ');
			col += ns;
		}
		else
		{
			putchar(c);
			col++;
		}
	}

	return 0;
}
