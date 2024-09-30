#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    float num[100], av, sum = 0.0;

    printf("Enter the numbers of data: ");
    scanf("%d", &n);

    if (n > 100 || n < 1)
    {
        printf("Error! range is (1 to 100).\n");
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    av = sum / n;
    printf("Average = %.2f", av);
    return 0;
}