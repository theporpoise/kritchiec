#include <stdio.h>

/* replaces each space of 1 or more with just 1 space
 * notice i had to use a static integer so taht it isn't reset
 * every time it leaves the scope of the function call!
 */

main()
{
    int c, lc;

    lc = 0;
    while ((c = getchar()) != EOF)
    {
        lc++;
        static int space = 0;
        if (c == ' ' ){
            space = 1;
            //printf("space is set to 1");
            continue;
        }
        
        if (space == 1 ){
            printf(" ");
            //printf("should have a space here");
            space = 0;
        }

        putchar(c);

        // printf("\n");
    }
    printf("char count is %d\n", lc);

}
