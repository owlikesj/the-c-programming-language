#include <stdio.h>
#include <limits.h>

int main()
{
	printf("signed char:\t%12d ~ %12d\n", ~((unsigned char) ~0 >> 1), (unsigned char) ~0 >> 1);
	printf("unsigned char:\t%12u ~ %12u\n", 0, (unsigned char) ~0);
	printf("signed short:\t%12d ~ %12d\n", ~((unsigned short) ~0 >> 1), (unsigned short) ~0 >> 1);
	printf("unsigned short:\t%12u ~ %12u\n", 0, (unsigned short) ~0);
	printf("signed int:\t%12d ~ %12d\n", ~(~0u >> 1), ~0u >> 1);
	printf("unsigned int:\t%12u ~ %12u\n", 0, ~0);
	printf("signed long:\t%12ld ~ %12ld\n", ~(~0ul >> 1), ~0ul >> 1);
	printf("unsigned long:\t%12lu ~ %12lu\n", 0l, ~0l);

	return 0;
}
