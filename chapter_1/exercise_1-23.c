#include <stdio.h>

int main()
{
	int inquto = 0, inlinecomment = 0, inblockcomment = 0;
	char c, prev = '\0';

	while ((c = getchar()) != EOF)
	{
		if (inquto)
		{
			if (c == '\"')
				inquto = 0;
			putchar(c);
		}
		else if (inlinecomment)
		{
			if (c == '\n')
			{
				inlinecomment = 0;
				putchar(c);
			}
		}
		else if (inblockcomment)
		{
			if (prev == '*' && c == '/')
			{
				inblockcomment = 0;
				c = '\0';
			}
		}
		else if (c == '\"')
			inquto = 1;
		else if (c == '/')
		{
			if (prev == '/')
				inlinecomment = 1;
		}
		else if (prev == '/')
		{
			if (c == '*')
				inblockcomment = 1;
			else
				putchar(prev), putchar(c);
		}
		else
			putchar(c);
		prev = c;
	}

	return 0;
}
