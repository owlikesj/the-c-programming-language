#include <stdio.h>

int htoi(char s[])
{
	int n = 0, i;

	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
		i = 2;
	else
		i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9') 
			n = n * 16 + s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			n = n * 16 + s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			n = n * 16 + s[i] - 'A' + 10;
		else
			break;
		i++;
	}
	return n;
}

int main()
{
	char s[20];
	int i;

	printf("Enter a hex num: ");
	for (i = 0; (s[i] = getchar()) != '\n'; i++);
	printf("It's oct value: %d\n", htoi(s));

	return 0;
}
