#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[], int maxline);
void reverse(char to[], char from[]);

int main()
{
	char line[MAXLINE];
	char rev[MAXLINE];

	while (getaline(line, MAXLINE))
	{
		reverse(rev, line);
		printf("%s\n", rev);
	}

	return 0;
}

int getaline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	s[i] = '\0';

	return i;
}

void reverse(char to[], char from[])
{
	int i, len = 0;

	for (i = 0; from[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
		to[i] = from[len - 1 - i];
	to[i] = '\0';
}
