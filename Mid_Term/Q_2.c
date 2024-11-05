#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float func(int num)
{
    float p = sqrt(num);
    return p;
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("%.3f", func(num));

    return 0;
}