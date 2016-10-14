#include <stdio.h>

#define MAXLINE 1000

int max;

char line[MAXLINE];
char longest[MAXLINE];

int yankline(void);
void copy(void);

// print longest input line; extern version

main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;

    while((len = yankline()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }
    if(max > 0)
        printf("\nthis is the longest line\n%s", longest);
    return 0;
}

// yankline

int yankline(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE-1 && (c=getchar()) != EOF & c != '\n'; ++i)
        line[i] = c;
    if (c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// copy 

void copy(void){
    int i;
    extern char line[], longest[];

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}




