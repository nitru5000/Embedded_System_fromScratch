#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
    float a[2][2], b[2][2], sum = 0;

    printf("Enter The elemnts of 1st matrix\n");

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    printf("\nEnter The elemnts of 2nd matrix\n");

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }

    printf("sum of matrices :\n");

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%.1f  ", (a[i][j] + b[i][j]));
        }
        printf("\n");
    }

    return 0;
}