#include <stdio.h>
#include <ctype.h>

// bitcount

unsigned int bitcount(unsigned x)
{
    int i, b = 0;

    while(x != 0)
    {
        if(x & 1)
        {
            b++;
            printf("x is %u, b is %d\n", x, b);
            x >>= 1; 
        }else
        {
            printf("x is %u, b is %d\n", x, b);
            x >>= 1;
        }

    }

    return b;
}

main(int argc, char *argv[])
{
    unsigned int xvalue = atoi(argv[1]); 

    printf("argv[1] is %s \n", argv[1]);

    printf("xvalue is %u\n", xvalue);
 
    printf("bitcount value is %u\n", bitcount(xvalue));

    return 0;
}




