#include <stdio.h>
#include <ctype.h>

// functions defined here
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}
// invert returns x with the n bits that begin at positiohn p inverter.
// so, give it a number.  then tell it where to start.  then tell it how many bits
// you want inverted.  it will invert those bits, then spit back out x with those
// bits inverted.

unsigned int invert(unsigned x, int p, int n)
{
    unsigned int iso = (~(~0 << n)) << (p+1-n);
    unsigned int y;
    unsigned int a = ~0;
    unsigned int invert;

    printf("a is %u\n", a);
    printf("iso is %u\n", iso);
    // 0000 1 1 1 000

    y = iso & x;
    printf("y is %u after bitwise and with X and iso\n", y);
    // 0000 original 0000- invert zeros string
    
    invert = iso & ~x;
    // 0000 invert 0000

    y = a ^ y;
    printf("y is %u y ^ all 1's string\n", y);
    //xor 1's with y to get 1 1 1 invert 1 1 1 

    // and with x - d d d 0 0 0 d d d
    a = y & x;

    // or with invert - d d d invert d d d
    a = a | invert; 
 
    printf("a is %u, y is %u, iso is %u \n", a, y, iso);


    return a;
}


main(int argc, char *argv[])
{
    unsigned int xvalue = atoi(argv[1]); 
    int p = atoi(argv[2]);
    int n = atoi(argv[3]);


    printf("argv[1] is %s and argv[2] is %s argv[3] is %s\n", argv[1], argv[2], argv[3]);

    printf("xvalue is %u, p is %d, n is %d\n", xvalue, p, n);
 
    printf("invert value is %u\n", invert(xvalue, p, n));

    return 0;
}




