#include <stdio.h>
#include <ctype.h>
// functions defined here, main below
// rightrot, bits that fall off the right are put back on the left end.

unsigned int rightrot(unsigned x, int n)
{
    int i;

    // i need to keep the binary value in the last space to see if I need
    // to add a 1 at the beginning of the number.
    //for loop for each iterations up to n
    //if statement, if mod 2, then right rot + or it with 2147483648 or hex notation
    //else just right rot.
    
    for(i = 0; i < n; i++)
    {
        if((x % 2) > 0)
        {
            printf("is odd \n");
            x = x >> 1;
            x = x | 2147483648;
        } else
            x = x >> 1;
        printf("for loop executed \n");
        printf("x is %u\n", x);
    }
    return x;
}

main(int argc, char *argv[])
{
    unsigned int xvalue = atoi(argv[1]); 
    int n = atoi(argv[2]);

    printf("argv[1] is %s and argv[2] is %s\n", argv[1], argv[2]);

    printf("xvalue is %u, n is %d\n", xvalue, n);
 
    printf("rightrot value is %u\n", rightrot(xvalue, n));

    return 0;
}




