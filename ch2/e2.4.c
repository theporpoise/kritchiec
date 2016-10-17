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

    void squeeze(char s[], char t[])
    {
        int i, j, k, match = 0;
        // if there's a match, then don't record it.  otherwise record it.
        for (i = j = k =  0; s[i] != '\0'; i++)
            {
                for (j = 0; t[j] != '\0'; j++)
                {
                    if(s[i] == t[j])
                    {
                        match = 1;
                        printf("we got a match\n");
                    }
                }

                if(match > 0)
                {
                    printf("matched for match \n");
                    match = 0;
                }else
                {
                    s[k] = s[i];
                    printf("sk is %c\n", s[k]);
                    k++;
                }
            //s[k] = '\0';
            }
        //this had to be outside the for loop so that it wouldn't terminate in null.
        s[k] = '\0';
    }
    squeeze(argv[1], argv[2]);
    printf("argv after delete is %s\n", argv[1]);
    return 0;
}




