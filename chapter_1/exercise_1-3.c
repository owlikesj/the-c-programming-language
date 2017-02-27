#include <stdio.h>

void main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 30;

	printf("fahrenheit to celsius table\n");
	printf("===========================\n");
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}
