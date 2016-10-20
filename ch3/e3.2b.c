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
// also you have to double escape backslashes on input e\\t\\n

char * myfunc(char t[], char s[])
{  
    int i, j;
    i = j = 0;

    char previous;

    while(t[i] != '\0' && i < 20)
        // i put a counter on while loops for safety.
        // also can use ctrl z, and the kill %(number) to kill a process
        // if I get an infinite while loop.
    {
        if (previous == '\\')
        {
            //printf("you got in the if\n");
            switch (t[i])
            {
                case 'n':
                    j--;
                    s[j] = '\n';
            //        printf("you are in n\n");
                    break;
                case 't':
                    j--;
                    s[j] = '\t';
                    break;
                default:
                    s[j] = t[i];
                    break;
            }
        }else
            s[j] = t[i];
 // this else statement was important, before it was overwriting s[j]
 // because I forgot to put it in an else clause.       
        previous = t[i];
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
    // to get the arguments passed as strings just refernce them directly
    // after declare char * variables to hold strings.
    t = argv[1];
    s = argv[2];
    // if you want the value of the first character in a string reference it
    // like argv[1][0].  
    
    printf("t is %s and s is %s\n", t, s); 
    printf("using myfunc %s\n", myfunc(t, s));

    return 0;
}




