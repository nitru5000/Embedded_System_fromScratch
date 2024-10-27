#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define area(a) (3.14)*(a)*(a)

int main() {
    
float i;
    printf("Enter thr radius");
    scanf("%f", &i);

    printf("Area = %.2f\n", area(i));
    return 0;
}
