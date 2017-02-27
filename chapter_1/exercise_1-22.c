#include <stdio.h>
#define MAXLINE 1000	/* max input line size */

char line[MAXLINE];	/* current input line */
int getaline(void);	/* taken from the KnR book */

main()
{
	int t, len;
	int location, spaceholder = -1;
	const int FOLDLENGTH = 70;
	extern char line[];

	while ((len = getaline()) > 0)
	{
		if (len >= FOLDLENGTH)
		{
			t = 0;
			location = 0;
			while (t < len)
			{
				if (line[t] == ' ')
					spaceholder = t;
				if (location == FOLDLENGTH)
				{
					if (spaceholder >= 0)
						line[spaceholder] = '\n';
					location = 0;
					spaceholder = -1;
				}
				location++;
				t++;
			}
		}
		printf("%s", line);
	}
}

int getaline(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}
