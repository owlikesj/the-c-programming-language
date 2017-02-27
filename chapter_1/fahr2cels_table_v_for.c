#include <stdio.h>

void main()
{
	float fahr, celsius;

	for (fahr = 0; fahr <= 300; fahr += 20)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}
