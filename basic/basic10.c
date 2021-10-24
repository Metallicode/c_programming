#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

	printf("Char:\n");
	printf("CHAR_MIN    :   %d\n", CHAR_MIN);
	printf("CHAR_BIT    :   %d\n", CHAR_BIT);
	printf("CHAR_MAX    :   %d\n", CHAR_MAX);
	printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
	printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
	printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
	printf("sizeof(char):	%lu (Byte)\n\n", sizeof(char));
	
	printf("Int:\n");
	printf("INT_MAX     :   %d\n", INT_MAX);
	printf("INT_MIN     :   %d\n", INT_MIN);
	printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
	printf("sizeof(int) :	%lu (Byte)\n\n", sizeof(int));
		
	printf("Long:\n");
	printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
	printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
	printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
	printf("sizeof(long) :	%lu (Byte)\n\n", sizeof(long));
	
	printf("Short:\n");
	printf("SHRT_MAX    :   %d\n", SHRT_MAX);
	printf("SHRT_MIN    :   %d\n", SHRT_MIN);
	printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
	printf("sizeof(short) :	%lu (Byte)\n\n", sizeof(short));

	printf("Float:\n");
	printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
	printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
	printf("Precision value: %d\n", FLT_DIG );
	printf("sizeof(float) :	%lu (Byte)\n\n", sizeof(float));
	
	printf("Double:\n");
	printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
	printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
	printf("sizeof(double):	%lu (Byte)\n\n", sizeof(double));
    
	return 0;
}
