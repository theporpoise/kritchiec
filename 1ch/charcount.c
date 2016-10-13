#include <stdio.h>

// count charactedrs in input; version 1

main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }        

    printf("first count is %ld\n", nc);

    double tc;

    for (tc = 0; getchar() != EOF; ++tc)
    {
        ;
    }

    printf("second count is %.0f\n", tc);

} 


