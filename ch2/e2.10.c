#include <stdio.h>
#include <ctype.h>

// bitcount

int lower(int c)
{
    c = (c >= 'a' && c <= 'z') ? c : (c - ('A' - 'a'));
    return c;
}

main(int argc, char *argv[])
{
    printf("argv[1] is %s \n", argv[1]);

    int c = *argv[1];

    //have to special convert from char to integer by referencing point.
    printf("atoi of argv is %d\n", c);
    
    //automagically converts integer to char when you use char.
    //good compiler :-)
    printf("conversion back to char is %c\n", c);
    

    printf("lower value is %c\n", 
            (c >= 'a' && c <= 'z') ? c : (c - ('A' - 'a')));
    printf("using lower function %c\n", lower(c));

    return 0;
}




