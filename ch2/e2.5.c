#include <stdio.h>
#include <ctype.h>

#define MAX 20 // maximum length of input

// notes:  to make this convert to hexidecimal, multiple by 16 not 10
// will need to check both lower and uppercase.
// maybe first format it through "to lowercase" and then convert :-)

// these are the function definitions up here

main(int argc, char *argv[])
{
    if(argc < 3)
    {
        printf("enter in 2 char strings to remove chars from string 2 in string one\n");
        return;
    }
//  write an alternate version of squeeze(s1, s2) that delets each character in s1
//  that matches any character in s2.  s2 is the delete string.

    int any(char s[], char t[])
    {
        int i, j= 0;
        // if there's a match, then don't record it.  otherwise record it.
        while(s[i] != '\0')
        {
            for (j = 0; t[j] != '\0'; j++)
            {
               if(s[i] == t[j])
                    {
                        printf("match char '%c' at location[%d] in %s\n", s[i], i, s);
                        return i; 
                    }
            }
            i++;

        }
        printf("no match in string, returning -1\n");            
        return -1;
    }
    any(argv[1], argv[2]);
    
    return 0;
}




