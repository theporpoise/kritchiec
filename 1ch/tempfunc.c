#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

float fconv(int m);

main()
{
    printf("fconv is %d\n", fconv(212));
    
    int fahr, celsius;
    int lower, upper, step;

    lower = -40;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 10;      // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = fconv(fahr);
        printf("%3d\t%3d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float fconv(int fahr)
{
    float i, p;

    i = 32.0;
    p = 5.0 / 9.0;

    // printf("i is %d p is %d", i, p);

    return (fahr - i) * p;
}


