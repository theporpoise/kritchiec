#include <stdio.h>
#include <ctype.h>

#define MAX 20

// function declarations

int binsearch(int c, int v[], int n)
{  
    int low, high, mid, k;
    k = 0;
    low = 0;
    mid = 0;
    high = n-1;

//    printf("low is %d high is %d \n", low, high);

    while(low <= high && (v[mid] != c))
    {
        k++;
        mid = (low+high) / 2;
        printf("mid is %d\n", mid);

        if(c < v[mid])
        {
            high = mid -1;
        }else
            low = mid +1;
    }

    return ((v[mid]==c) ? mid : -1);
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
//    printf("argv[1] is string %s \n", argv[1]);

    //converting input into number for computations

    int c = 0;

    // printf("*argv[1] is %d size is %d \n ", argv[1][2], sizeof(argv[1]));

    for (j=0; argv[1][j] != '\0'; j++)
    {
        c = 10*c + (argv[1][j] - '0');   
    }
    
//    printf("displaying number in print f just use percent d  %d\n", c);
    
    printf("using binary search function %d\n", 
            binsearch(c, sorteda, MAX));

    return 0;
}




