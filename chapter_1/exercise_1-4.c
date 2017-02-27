#include <stdio.h>

void main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 30;

	printf("celsius to fahrenheit table\n");
	printf("===========================\n");
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = 9 * celsius / 5 + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}
