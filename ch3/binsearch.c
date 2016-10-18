#include <stdio.h>
#include <ctype.h>

#define MAX 20

// function declarations

int binsearch(int c, int v[], int n)
{  
    int low, high, mid;
    low = 0;
    high = n-1;

    while(low <= high)
    {
        mid = (low+high) / 2;
        if(c < v[mid])
        {
            high = mid -1;
        }else if(c > v[mid])
        {
            low = mid + 1;
        }else
            return mid;
    }
    
    return -1;
}

main(int argc, char *argv[])
{
    int i, j;
    int sorteda[MAX];

    //created sorted array of length MAX
    for (i = 0; i <MAX; i++)
    {
        sorteda[i] = i;
    }
    
    //printing out what was passed to the file as input, only first argument.
    printf("argv[1] is string %s \n", argv[1]);

    //converting input into number for computations

    int c = 0;

    // printf("*argv[1] is %d size is %d \n ", argv[1][2], sizeof(argv[1]));

    for (j=0; argv[1][j] != '\0'; j++)
    {
        c = 10*c + (argv[1][j] - '0');   
    }
    
    printf("displaying number in print f just use percent d  %d\n", c);
    
    printf("using binary search function %d\n", 
            binsearch(c, sorteda, MAX));

    return 0;
}




