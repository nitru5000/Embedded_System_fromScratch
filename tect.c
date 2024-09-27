#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int a[5] = {1,2,3,4,5,} ;
  int * ptr = a;

  printf("%d\n" ,&a); 
  printf("%d\n" ,a); 
  printf("%d\n" ,ptr);
  printf("%d\n" ,&ptr);

 
   

    return 0;
}