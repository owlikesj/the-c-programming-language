#include <stdio.h>
#include <limits.h>

int main()
{
	printf("signed char:\t%12d ~ %12d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char:\t%12u ~ %12u\n", 0, UCHAR_MAX);
	printf("signed short:\t%12d ~ %12d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short:\t%12u ~ %12u\n", 0, USHRT_MAX);
	printf("signed int:\t%12d ~ %12d\n", INT_MIN, INT_MAX);
	printf("unsigned int:\t%12u ~ %12u\n", 0, UINT_MAX);
	printf("signed long:\t%12ld ~ %12ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long:\t%12lu ~ %12lu\n", 0l, ULONG_MAX);

	return 0;
}
