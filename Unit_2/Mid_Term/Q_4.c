#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void reverse(int n);

int main()
{

    int h;

    printf(" input :");
    scanf("%d", &h);
    reverse(h);

    return 0;
}

void reverse(int n)
{
    int p = 0;

    while (n != 0)
    {
        p = p * 10 + n % 10;
        n = n / 10;
    }
    printf("output :%d ", p);
}