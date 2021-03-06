#include <stdio.h>
#include <ctype.h>

//define statements 

#define MAX 150

//function expand(s1, s2) expands shorthand notation like a-z in s1 to
//abc . . . xyz in s2.  (copy s1 to s2 with substitution).  
//handle a-b-c, a-z0-9, and -a-z.  leading or trailing - is taken literally.

// function declarations
char * myfunc(char s[], char t[])
{  
    int i, j, k;
    i = j = 0;

    while(s[i] != '\0' && i < 100)
    {
        printf("inside the loop\n");
        if(s[i] == '-')
        {
            if(((i-1)< 0))
            {
                t[j] = s[i];
                i++, j++;
                continue;
            }
            else if(s[i+1] == '\0')
            {
                t[j] = s[i];
                t[j+1]= '\0';
                return t;
            }
            else if(s[i+1] < s[i-1])
            {
                t[j] = s[i];
                i++, j++;
                continue;
            }
            else if((s[i-1] >= 'a' && s[i-1] <= 'z') &&
                    (s[i+1] >= 'a' && s[i+1] <= 'z') &&
                    (s[i+1] > (s[i-1]))) 
            {
                for(k=1; k < (s[i+1] - s[i-1]); k++ )
                {
                    t[j] = (s[i-1] + k);
                    j++;
                }
                i++;
                continue;
            }
            else if((s[i-1] >= 'A' && s[i-1] <= 'Z') &&
                    (s[i+1] >= 'Z' && s[i+1] <= 'Z') &&
                    (s[i+1] > (s[i-1]))) 
            {
                for(k=1; k < (s[i+1] - s[i-1]); k++ )
                {
                    t[j] = (s[i-1] + k);
                    j++;
                }
                i++;
                continue;
            }
            else if((s[i-1] >= '0' && s[i-1] <= '9') &&
                    (s[i+1] >= '0' && s[i+1] <= '9') &&
                    (s[i+1] > (s[i-1]))) 
            {
                for(k=1; k < (s[i+1] - s[i-1]); k++ )
                {
                    t[j] = (s[i-1] + k);
                    j++;
                }
                i++;
                continue;
            }
        }

        t[j] = s[i];
        printf("i is %d\n", i); 
        i++, j++;
    }

    t[j+1]= '\0';

    return t;
}

//main function that works from command line.
main(int argc, char *argv[])
{
    //printf("argc %d, argv %d, *argv %d, *argv1 %d, argv1 %s, argv10 is %c\n",
    //        argc, argv, *argv, *argv[1], argv[1], argv[1][0]); 
    
    char z[MAX];

    printf("argv1 is %s, argv2 is %s\n", argv[1], z); 
    
    printf("using myfunc %s is the answer \n", myfunc(argv[1], z));

    return 0;
}




