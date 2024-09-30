#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
     float a , b ; 
     char symbol ;


      printf("Enter operator ethier + or - or * or divide : "); 
      scanf("%c",&symbol) ;

      printf("Enter two operands : "); 
      scanf("%f %f",&a,&b) ;

      switch (symbol)
      {
      case '+':
        printf(" %f + %f = %f" ,a,b , (a+b)); 
        break;
      case '-':
        printf(" %f - %f = %f" ,a,b , (a-b)); 
        break;
      case '*':
        printf(" %f * %f = %f" ,a,b , (a*b)); 
        break;
      case '/':
        printf(" %f / %f = %f" ,a,b , (a/b)); 
        break;
    
      }


    

      
     
    return 0;  
}   