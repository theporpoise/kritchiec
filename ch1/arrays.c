#include <stdio.h>

/* count each digit, the white space, and other */

//because number chars
// are in order then by subtracting the value at zero you will
// set it equal to it's number value, which is an int!,

main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    for (i = 0; i < 10; i++) 
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            // check if it's a number char.  if yes then
            // turn it to a digit int  by subtracting 0
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits =\n");
    for (i = 0; i < 10; ++i)
        printf("%d has %d occurances\n", i, ndigit[i]);
    printf("white space = %d, other = %d\n", nwhite, nother);
}
