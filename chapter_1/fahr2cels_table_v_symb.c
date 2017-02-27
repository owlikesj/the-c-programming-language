#include <stdio.h>
#define LOWER	0
#define UPPER	300
#define STEP	20

void main()
{
	float fahr, celsius;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}
