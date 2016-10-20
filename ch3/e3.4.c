#include <stdio.h>
#include <ctype.h>
#include <string.h>

//define statements 

#define MAX 50

// Answer to question 3.4:
// there's no way to represent the negative of the the largest negative number
// in two's compliment since positive numbers can hold 1 less than negative
// since 0000 represents 0 (positive numbers can't hold as much as negative).

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

char * myfunc(int n, char s[])
{   

    int i, sign;
    sign = n;

    i = 0;

    do
    {
        s[i++] = abs(n % 10) + '0';
    } while ((n /= 10) );

    if (sign < 0)
        s[i++] = '-';
    reverse(s);

    return s;
}

//main function that works from command line.
main(int argc, char *argv[])
{
    //printf("argc %d, argv %d, *argv %d, *argv1 %d, argv1 %s, argv10 is %c\n",
    //        argc, argv, *argv, *argv[1], argv[1], argv[1][0]); 
    
    int myint = atoi(argv[1]);
    char mychar[MAX];

    printf("argv1 is %s\n", argv[1]); 
    
    printf("using myfunc %s is the answer \n", myfunc(myint, mychar));

    return 0;
}




