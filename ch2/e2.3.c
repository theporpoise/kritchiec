#include <stdio.h>
#include <ctype.h>

#define MAX 20 // maximum length of input

// notes:  to make this convert to hexidecimal, multiple by 16 not 10
// will need to check both lower and uppercase.
// maybe first format it through "to lowercase" and then convert :-)

// these are the function definitions up here

main(int argc, char *argv[])
{
    
    printf("arg is %s\n", argv[1] ); 
    printf("arg is %d digits long\n", sizeof(argv[1]) ); 
    int toint(char s[])
    {
        int i, n;
        n = 0;

// if it's between 1 and 9, then multiple by 16 at it's current decimal place and add to 
// and integer value.

        for(i = 0; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'F') || 
                (s[i] >= 'a' && s[i] <= 'f'); ++i)
        {
            if(s[i] == '0' && (s[i+1] =='x' || s[i+1] == 'X'))
            {
                i++;
                continue;
            }else if(s[i] >= '0' && s[i] <= '9')
            {
                n = 16*n + (s[i] - '0');
            }else if(s[i] >= 'a' && s[i] <= 'f')
            {
                n = 16*n + ((s[i] - 'a') + 10);
            }else if(s[i] >= 'A' && s[i] <= 'F')
            {
                n = 16*n + ((s[i] - 'A') + 10);
            }


            printf("n is %d\n", n);
            printf("si is %c\n", s[i]);
        } 
        return n;
    } 
    printf("conversion is %d\n", toint(argv[1]));
    return 0;
}




