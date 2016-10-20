#include <stdio.h>
#include <ctype.h>

//define statements 

//#define MAX 50

// function declarations
int myfunc(char s[])
{  
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for(n=0; isdigit(s[i]); i++)
        n = 10*n + (s[i] - '0');
    return sign * n;
}

//main function that works from command line.
main(int argc, char *argv[])
{
    //printf("argc %d, argv %d, *argv %d, *argv1 %d, argv1 %s, argv10 is %c\n",
    //        argc, argv, *argv, *argv[1], argv[1], argv[1][0]); 

    printf("argv1 is %s\n", argv[1]); 
    
    printf("using myfunc %d\n", myfunc(argv[1]));

    return 0;
}




