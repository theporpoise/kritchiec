#include <stdio.h>

//shell sort, sorts with starting interval set at 1/2 the total length
//then collapes that length by factor of 2 each time.
//does a final compare that is bubble sortish to ensure it's in order.

int main(void)
{
    
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for(j = i-gap; j>=0 && v[j]>v[j+gap]; j-=gap)
                    {
                    temp = v[j];
                    v[j] = v[j+gap];
                    v[j+gap] = temp;
                    }

}


