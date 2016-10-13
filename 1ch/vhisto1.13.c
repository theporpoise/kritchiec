#include <stdio.h>

#define MAXL 15 // define the maximum length of the words
#define OUT 0 // reset to 0 for counters
#define IN 1 // means it's currently in a word

/* write a program to print a histogram of the lenghts of words in it's input.
 * horizontal and vertical.
 */

main()
{
    int c, i, wlcount, state, j, k;
    int wlarray[MAXL];

    wlcount = 0;
    state = IN;

    for (i = 0; i < MAXL; i++) 
        wlarray[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            if (wlcount == 0)
            {
                //handles case where first char is whitespace
                state = OUT;
                wlcount = 1;
                continue;
            }
            ++wlarray[wlcount];
            wlcount = 1;
        }
        else 
            ++wlcount;
    }

    // capture the last word
    ++wlarray[wlcount];
    
    printf("the number of words by word length:");

// i'm thinking i can do some sort of if statement here to see if it is equal
// to the current number i'm checking.  then decrement it.  print a thing. 
// and iterate.

    for (i = MAXL; i > 0; --i)
    {
        for (j = 1; j < MAXL; j++)
            if (wlarray[j] == i)
            {
                printf(" * ");
                --wlarray[j];
            }   
            else 
                printf("   ");
        printf("\n");
        // printf("%d length word has %d occurances\n", i, wlarray[i]);

    }
    
    for (k = 1; k < MAXL; ++k)
    {
        printf("___");
    }

    printf("\n");


    for (i = 1; i < MAXL; ++i)
    {
        printf("%2d ", i);
    }

    printf("\n");
}
