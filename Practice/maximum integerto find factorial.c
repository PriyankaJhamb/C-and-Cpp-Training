// C program to find maximum value of
// an integer for which factorial can
// be calculated on your system
#include <stdio.h>

int findMaxValue()
{
    int res = 879655;
    long long int fact = 2;
    while (1)
    {
        // when fact crosses its size,
        // it gives negative value
        if (fact < 0)
            break;
        res++;
        fact = fact * res;
    }
    return res - 1;
}

// Driver Code
int main()
{
    printf ("Maximum value of integer : %d\n",
                                 findMaxValue());
    return 0;
}
