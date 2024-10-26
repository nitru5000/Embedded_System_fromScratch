#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 struct complex {
    float real;
    float imag;
};

void add(struct complex *a, struct complex *b);

int main() {
    struct complex n1, n2;

    printf("For 1st complex number \nEnter the real and imaginary respectively: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("For 2nd complex number \nEnter the real and imaginary respectively: ");
    scanf("%f %f", &n2.real, &n2.imag);

   add(&n1,&n2);

    printf("Sum = %.1f + %.1fi", n1.real, n1.imag);
    return 0;
}

void add(struct complex *a, struct complex *b) {
    
    a->real = a->real + b->real;
    a->imag = a->imag + b->imag;
    
}
