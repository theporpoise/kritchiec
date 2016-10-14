#include <stdio.h>

/* count lines in input */

main()
{
    int c, nl, lc;

    nl = 0;
    lc = 0;
    while ((c = getchar()) != EOF)
    {
        lc++;
        if (c == '\n' || c == ' ' || c == '\t'){
            ++nl;
            continue;
        }
        putchar(c);
        printf("\n");
    }
    printf("line count is %d and char count is %d\n", nl, lc);

    printf(" the letter A number value is %d\n", 'A');
    printf(" the char 1 number value is %d\n", '1');
    printf(" the char 2  number value is %d\n", '2');
}
