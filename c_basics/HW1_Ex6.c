#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int i, j, temp;

    printf("Enter value of a:");
    scanf("%d", &i);
    printf("Enter value of b:");
    scanf("%d", &j);

    temp = i;
    i = j;
    j = temp;

    printf("After swapping, value of a =  %d \n", i);
    printf("After swapping, value of b =  %d ", j);

    return 0;
}