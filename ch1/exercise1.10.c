#include <stdio.h>

/*replaces escape characters.  note, to get the backspace character on the
 * command line you have to press control V control H (hold down control
 * and press v and then press h.  otherwise it will just delete the 
 * previous character which is not what you want in this case.
 * */

main()
{
    int c, lc;

    lc = 0;
    while ((c = getchar()) != EOF)
    {
        lc++;
        if (c == '\t' ){
            printf("\\t");
            continue;
        }
        
        if (c == '\b' ){
            printf("\\b");
            continue;
        }
        
        if (c == '\\' ){
            printf("\\");
            //printf("should have a space here");
        }

        putchar(c);

        // printf("\n");
    }
    printf("char count is %d\n", lc);

}
