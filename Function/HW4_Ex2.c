#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void check_prime(int n);

int main()
{

    int high, low;

    printf(" Enter the two numbers (intervals) :");
    scanf("%d %d", &high, &low);
    printf(" Prime numbers are : \n ");

    for (int i = high + 1; i < low; i++)
    {
        check_prime(i);
    }

    return 0;
}

void check_prime(int n)
{
    int flag = 0;
    for (int i = 2; i < (n / 2); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d ", n);
}