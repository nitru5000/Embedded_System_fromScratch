#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Fact(int n);

int main()
{

    int n, i;

    printf("Enter a Positive Enteger :");
    scanf("%d", &n);
    printf("Factorial of %d : %d",n, Fact(n));

    return 0;
}

int Fact(int n)
{

    if (n == 1)
        return 1;

    return n * Fact(n - 1);
}

