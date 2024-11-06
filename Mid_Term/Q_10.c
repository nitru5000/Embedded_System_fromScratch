#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define no_zero 0
#define first_zero 1
#define second_zero 2
#define reset 0
int main(void)
{

    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;
    int countFlag = no_zero;
    int max = 0;

    for (; n >= 0; n >>= 1)
    {

        if ((n & 1) && countFlag)
        {
            count++;
        }

        else
        {
            if ((n & 1) == 0)
                countFlag++;
            if (countFlag == second_zero)
            {
                if (count > max)
                    max = count;
                count = reset;
                countFlag = first_zero;
            }
        }
        if (n == 0)n = -1;
    }

    printf("Max. number of 1s between two 0s is %d\n", max);

    printf("\n");
    return 0;
}