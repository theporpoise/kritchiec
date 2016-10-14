#include <stdio.h>
#define MAXLINE 1000 // maximum input line size, to prevent huge input.
#define MIN 3  // minimum print length

// these are the function definitions up here
int yankline(char line[], int maxline);
void copy(char to[], char from[]);

// this array is passed between main and yankline, so declaring it here. 
char longest[MAXLINE]; 

main()
{
    int len; // current line length
    int max; // max len so far
    char line[MAXLINE]; // initialized input line, will be current input line

    max = 0;

    while ((len = yankline(line, MAXLINE)) > 0)
        if ( len > MIN )
        {
            printf("\nthe line was > %d:\n%s\n", MIN, longest);
        }
    printf("\n");
    return 0;
}

int yankline(char s[], int lim)
{
    int c, i;
    //only printing the first 1000 chars to save room.
    for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
        s[i] = c;
    if ( i == (lim -1 ))
    {
        while((c=getchar()) != '\n')
        {
            ++i;
        }
    }
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    copy(longest, s);
    return i;
}

void copy(char to[], char from [])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


