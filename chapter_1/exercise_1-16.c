#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int num;
	char line[MAXLINE];
	long len = 0;

	do
	{
		num = getaline(line, MAXLINE);
		printf("%s", line);
		len += num;
	} while (num == MAXLINE - 1 && line[MAXLINE - 1] != '\n');
	printf("length: %ld\n", len);

	return 0;
}

int getaline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}
