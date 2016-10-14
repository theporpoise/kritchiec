#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

// these are the function definitions up here
int yankline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

main()
{
    int len; // current line length
    int max; // max len so far
    char line[MAXLINE]; // initialized input line, will be current input line
    char longest[MAXLINE]; // longest line saved here

    max = 0;

    while ((len = yankline(line, MAXLINE)) > 0)
        if ( len > max )
        {
            max = len;
            copy(longest, line);
        }
    if(max > 0)
        printf("%s", longest);
    
    printf("\n");
    printf("max is %d, len is %d, line is %s longest is %s\n", max, len, line, longest);
    return 0;
}

int yankline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
        s[i] = c;
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    //printf("you are here");
    return i;
}

void copy(char to[], char from [])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


