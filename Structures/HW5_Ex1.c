#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct student {
  char name  [50] ;
  float mark ;
  int roll ;
} ;

int main()
{
    struct student s ;
    printf("Enter information of students :\n ");
    printf("Enter name :");
    gets(s.name);
    printf("Enter roll number : ");
    scanf("%d",&s.roll);
    printf("Enter marks : ");
    scanf("%d",&s.mark);

    printf("Displaying information :\n ");
    printf("name : %s\n",s.name);
    printf("roll : %d\n",s.roll);
    printf("marks : %d",s.mark);
    return 0;
}


