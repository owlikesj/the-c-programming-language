#include <stdio.h>

int any(char s1[], char s2[])
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s2[j] != '\0'; j++)
			if (s1[i] == s2[j])
				return i;
	return -1;
}

main()
{
	char s1[100], s2[10];
	int i;

	printf("s1 = ");
	for (i = 0; (s1[i] = getchar()) != '\n'; i++) ;
	s1[i] = '\0';
	printf("s2 = ");
	for (i = 0; (s2[i] = getchar()) != '\n'; i++) ;
	s2[i] = '\0';
	printf("%d\n", any(s1, s2));
}
