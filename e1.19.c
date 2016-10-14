#include <stdio.h>
#define MAXLINE 1000

// global variables
char longest[MAXLINE]; 
char blankline[MAXLINE];
char c;

// function to remove trailing spaces from lines
int rmblanks();

//checking for trailing blanks at end of line.  so need to be
//in blank or out of blank.  if you see a char, then you can save blanks
//to the line.  if you don't see another char, you drop the blanks.
//i think i will reuse copy, to copy the bunch of blanks to the line if there
//is another char later.

main()
{
    int len;

    while ((len = rmblanks()) > 0)
        printf("\nthe line was:\n%s\n", longest);
    
    return 0;
}

    int rmblanks()
{
    int i, j, k;
    i = j = k = 0;
    
    for (k =0; k < MAXLINE; ++k)
    {
        blankline[k] = '\0';
        longest[k] = '\0';
    }
    
    while((c=getchar()) !=EOF && c!='\n')
    {
        
        if (c != ' ' && c != '\t')
        {
            while(i < j)
            {
                longest[i] = blankline[i];
                ++i;
            }
            longest[i] = c; 
            blankline[j] = c;
            ++i;
            ++j;
        } else
        {
            blankline[j] = c;
            ++j;           
        }
    }
    return i;
}
