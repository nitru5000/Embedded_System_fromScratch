#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct student {
    char firstName[50];
    int roll;
    float marks;
} ;

int main() {
    struct student s[2] ;
    int i;

    printf("Enter information of students:\n");

  
    for (i = 0; i < 2; ++i) {
        s[i].roll = i + 1;
        printf("For roll number%d \n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

   
    for (i = 0; i < 2; ++i) {
        printf("\nRoll number: %d\n",s[i].roll);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
