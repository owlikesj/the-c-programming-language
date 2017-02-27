#include <stdio.h>
#define MAXLINE 1000

char reduceLine(char line[], int maxline);

int main()
{
	char line[MAXLINE];
	long len = 0;

	while (reduceLine(line, MAXLINE) != EOF)
		printf("%s", line);

	return 0;
}

char reduceLine(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n')
	{
		while (i > 1 && s[i - 1] == ' ' || s[i - 1] == '\t')
			i--;
		if (i)
		{	
			s[i] = c;
			i++;
		}
	}
	s[i] = '\0';

	return c;
}
