#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

// these are the function definitions up here
int yankline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

main()
{
    
    //printf("main function was called \n");
    char instr[] = "12345001";
    
    int toint(char s[])
    {
        int i, n;

        n = 0;
        for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        {
            n = 10*n + (s[i] - '0');
            printf("n is %d\n", n);
        }
        return n;

    } 

    printf("conversion is %d\n", toint(instr));
 
    return 0;
}




