#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
    
     int a ,sum = 1 ;  

      printf("Enter a number "); 
      scanf("%d",&a) ;


    
      
      if (0>a)  printf(" Error!! factorial of ngative numbers does not exist "); 
      else { for (int i =1 ; i <= a ; i++) sum *= i ;
                printf("sum %d " , sum); }
       
      
     
    return 0;  
}   