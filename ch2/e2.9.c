#include <stdio.h>
#include <ctype.h>

// bitcount

unsigned int bitcount(unsigned x)
{
    int b;

    for(b = 0; x != 0; x &= (x-1))
    {
        b++;
    } 

    return b;
}

main(int argc, char *argv[])
{
    unsigned int xvalue = atoi(argv[1]); 

    printf("argv[1] is %s \n", argv[1]);

    printf("xvalue is %u\n", xvalue);
 
    printf("bitcount value is %u\n", bitcount(xvalue));

    //unsigned int f = atoi(argv[1]);
    //f &= (f - 1);
    //printf("and equals is %u\n", f);

    return 0;
}




