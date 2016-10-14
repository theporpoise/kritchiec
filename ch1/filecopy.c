#include <stdio.h>

// copy input to output; version 1

main()
{
    int c;

    printf("%i\n", EOF);
    printf("eof is %d number \n", (getchar() != EOF ));

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

