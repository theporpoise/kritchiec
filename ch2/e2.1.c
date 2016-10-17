#include <stdio.h>
#include <limits.h>
#include <float.h>

// write a program to determine the ranges of char, short, int, and long
// signed and unsigned, by direct computation and by printing from standard
// headers. determine the ranges of various floating point types.

main(){
    printf("char is %d\n", CHAR_BIT);
    printf("unsigned char max is %d\n", UCHAR_MAX);
    printf("signed char max is %d\n", SCHAR_MAX);
    printf("unsigned char min is %d\n", 0);
    printf("signed char min is %d\n", SCHAR_MIN);

    printf("short max is %d\n", SHRT_MAX);
    printf("short min is %d\n", SHRT_MIN);
    printf("short max unsigned is %d\n", USHRT_MAX);

    printf("int max is %d\n", INT_MAX);
    printf("int min is %d\n", INT_MIN);
    printf("int max unsigned is %d\n", UINT_MAX);

    printf("long max is %d\n", LONG_MAX);
    printf("long min is %d\n", LONG_MIN);
    printf("long max unsigned is %d\n", ULONG_MAX);

    return 0;
}
