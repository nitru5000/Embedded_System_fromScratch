#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int x, loc, num, a[50];

    printf("Enter No. of elements\n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        a[i] = i + 1;
        printf("%d ", a[i]);
    }

    printf("\nEntered the number to be inserted\n");
    scanf("%d", &x);
    printf(" Entered the location\n");
    scanf("%d", &loc);

    for (int i = num; i >= loc - 1; i--)
    {
        if (i == loc - 1)
        {
            a[i] = x;
            break;
        }
        a[i] = a[i - 1];
    }

    for (int i = 0; i < num + 1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}