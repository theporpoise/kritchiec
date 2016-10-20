#include <stdio.h>
#include <ctype.h>
#include <string.h>

//define statements 

#define MAX 50

// write a function that accepts 3 arguments instead of 2.   the third argument
// is minimum field width, the converted number must be padded with blanks
// on the left if necessary to ensure it is wide enough.
// NOTE:  I'm modifying the more complicated function from 3.5 to accept field
// width.  it's identical in terms of exercise, but uses the more complicated 
// version of the conversion function.

// function declarations

void reverse(char s[])
{
    int c, i, j;

    for(i =0, j = strlen(s)-1; i<j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

char * myfunc(int n, char s[], int b, int f)
{   

    char * stringer = "0123456789ABCDEF";
    int i, sign;
    sign = n;

    i = 0;

    do
    {
        s[i++] = stringer[(abs(n % b))];
    } while ((n /= b) );

    if (sign < 0)
        s[i++] = '-';
    
    while(strlen(s) < f)
    {
        s[i++] = ' ';
    }
    
    s[i] = '\0';

    reverse(s);

    return s;
}

//main function that works from command line.
main(int argc, char *argv[])
{
    //printf("argc %d, argv %d, *argv %d, *argv1 %d, argv1 %s, argv10 is %c\n",
    //        argc, argv, *argv, *argv[1], argv[1], argv[1][0]); 
    
    int myint = atoi(argv[1]);
    int mybase = atoi(argv[2]);
    int field_width = atoi(argv[3]);
    char mychar[MAX];

    printf("argv1 is %s\n", argv[1]); 
    
    printf("using myfunc %s is the answer \n", myfunc(myint, mychar, mybase, field_width));

    return 0;
}




