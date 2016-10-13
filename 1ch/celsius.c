#include <stdio.h>

/* print Celsius-fahr  table
 * for c  = 0, 10, ..., 100, float version,*/

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;      // lower limit of temperature table
    upper = 100;    // upper limit
    step = 10;      // step size

    celsius = lower;

    printf("Celsius to Fahr Table:\n");
    printf("C \t F\n");

    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f \t %6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}


