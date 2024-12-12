#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int func(int num)
{
    int p = 0;
    while (num != 0)
    {
        p = p + num % 10;
        num = num / 10;
    }
    return p;
}
 
int main()
{
    int num, p = 0;
    scanf("%d", &num);

    printf("%d", func(num));

    return 0;
}