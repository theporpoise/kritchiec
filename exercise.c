#include <stdio.h>

//define statements #define MAX 20

// function declarations

int myfunc(void)
{  
    return 0;
}

//main function that works from command line.
main(int argc, char *argv[])
{
    printf("argc is %d and argv1 is %s\n", argc, argv[1]);

    printf("using myfunc %d\n", myfunc());

    return 0;
}




