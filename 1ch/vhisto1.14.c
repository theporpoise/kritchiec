#include <stdio.h>

#define ASKI 127 // # of ascci characters
#define LB //
#define MAXCHAR 100 // maximum number of chars of same time (b/c screen size!)

/* write a program to print a histogram of the occurance of each char type. 
 */

main()
{
    int c, i, j, k, l, m;
    int wlarray[ASKI];

    for (j = 0; j < ASKI; j++){
        wlarray[j] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        ++wlarray[c];
    }



    for (i = 0; i < ASKI; ++i)
    {
        printf( " %c | ", i);
        //printf(" %d\n", wlarray[i]);
        for (k = 0; k < wlarray[i]; k++)
            printf(" * ");

        printf("\n");

    }
    
    printf("\n");

    
    }
