#include <stdio.h>
#define MAXLINE 1000

// global variables
char longest[MAXLINE]; 
char blankline[MAXLINE];
char c;

// function to reverse the character input from getchar one char at a time.
int reverse();

//checking for trailing blanks at end of line.  so need to be
//in blank or out of blank.  if you see a char, then you can save blanks
//to the line.  if you don't see another char, you drop the blanks.
//i think i will reuse copy, to copy the bunch of blanks to the line if there
//is another char later.

main()
{
    int len, k;

    while ((len = reverse()) > 0)
    {
        printf("\nreversing the line gives\n%s\n", longest);
        for (k =0; k < MAXLINE; ++k)
        {
            blankline[k] = '\0';
            longest[k] = '\0';
        }
    }
    
    return 0;
}

// i'm thining that i go through the line saving the char to blankline, then
// when it exits the while i go through blankline from back to front assigning
// the char to longest from front to back.

int reverse()
{
    int i, j;
    i = j = 0;
    
    while((c=getchar()) !=EOF && c!='\n')
    {
        blankline[j] = c;
        ++j;           
    }
    //printf("j is %d and char is %c\n", j, blankline[j-1]);
    while(i < j)
    {
        longest[i] = blankline[(j-i)-1];
        //printf("char at i is %c\n", longest[i]);
        ++i;
    }
    //printf("longest is %s\n", longest);
    // ensuring it terminated in null char
    
    longest[i] = '\0';

    return i;
}

// notes:  i accidentally went o" the string blankline by 1 and the i got a blank output
// so the lesson there is definitely check the the mapping length does not go over the 
// string lenght.  putting in print statement sreally halped!"
