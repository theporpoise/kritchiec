#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

/* count lines, words, and chars in input 
 * one thing to look out for is if multiple tabs and spaces
 * next to each other break the program.  that's why the else if
 * is used, becuase it is only executed if the previous if
 * does not fire, which means it won't get tricked by multiple
 * spaces next to each other.
 * it waits until the beginning of the next word before 
 * incrementing word count.  this is exercise 11.  12 is the code.*/

main()
{
    int c, nc, nw, nl, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) 
        {
            state = IN;
            ++nw;
            printf("\n");
        }
        putchar(c);
    }
    printf("%d lines %d words %d chars\n", nl, nw, nc);
} 
