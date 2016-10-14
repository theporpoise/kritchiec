#include <stdio.h>


// these are symbol constants.  they remain the same throughout
// the program.  their values are substituted in whereever you
// see their names in the rest of the program.
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


