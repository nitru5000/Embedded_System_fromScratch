#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Distance {
   int feet;
   float inch;
} ;

int main() {
   struct Distance a,b;
   
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &a.feet);
   printf("Enter inch: ");
   scanf("%f", &a.inch);
 
   
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &b.feet);
   printf("Enter inch: ");
   scanf("%f", &b.inch);
   
   
    a.feet = a.feet + b.feet;
    a.inch = a.inch + b.inch;

   
   while (a.inch >= 12.0) {
       a.inch = a.inch - 12.0;
      a.feet++;
   }
   printf("\nSum of distances = %d\'-%.1f\"", a.feet, a.inch);
   return 0;
}
