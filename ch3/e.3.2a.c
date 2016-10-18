#include <stdio.h>

//define statements 

#define MAX 50

// function declarations
// escape function converts newline and table to visible escape sequences.
// as it copies from string t to s.
// note:  to do this on the command line pass in a sentence with quotes
// so it will pass as a single arguement to argv like this ./a.out 't d d' me
// will give t d d as the answer.  't d d' is treated as single argument.
// need to enter in escape sequence control-v, control-i for tab and
// control-v, control-j for newline (linefeed)

char * myfunc(char t[], char s[])
{  
    int i, j;
    i = j = 0;

    while(t[i] != '\0' && i < 20)
    {
        switch (t[i])
        {
            case '\n':
                s[j] = '\\';
                //printf("you are here");
                j++;
                //printf("past j++");
                s[j] = 'n';
                //printf("past b");
                break;
            case '\t':
                s[j] = '\\';
                j++;
                s[j] = 't';
                break;
            default:
                s[j] = t[i];
                break;
        }
        
        i++;
        j++;
    }
    s[j] = '\0'; 
    return s;
}

//main function that works from command line.
main(int argc, char *argv[])
{
    //printf("argc %d, argv %d, *argv %d, *argv1 %d, argv1 %s, argv10 is %c\n",
    //        argc, argv, *argv, *argv[1], argv[1], argv[1][0]); 

    char * t, * s;
    t = argv[1];
    s = argv[2];
    
    printf("t is %s and s is %s\n", t, s); 
    printf("using myfunc %s\n", myfunc(t, s));

    return 0;
}




