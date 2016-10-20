#include <stdio.h>
#include <ctype.h>
#include <string.h>

//define statements 

#define MAX 50

// write a function itob(n,s,b) that converts the integer n into a base
// b character representation in the string s.  in particular, itob(n,s,16 )
// formats n as a hexadecimal integer. 

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

char * myfunc(int n, char s[], int b)
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
    char mychar[MAX];

    printf("argv1 is %s\n", argv[1]); 
    
    printf("using myfunc %s is the answer \n", myfunc(myint, mychar, mybase));

    return 0;
}




