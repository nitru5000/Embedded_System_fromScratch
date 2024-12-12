#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct employee {
    char *empname;
    int empid;
};

int main() {
    printf("\n\n Pointer : Show a pointer to an array which contents are pointer to structure : \n");
    printf("----                                                                                                                     ---\n");

    static struct employee emp1 = {"Jhon", 1001}, emp2 = {"Alex", 1002}, emp3 = {"Taylor", 1003};
    struct employee *arr[3] = {&emp1, &emp2, &emp3};
    struct employee (*(*pt)[3]) = &arr;

    printf(" Exmployee Name : %s \n", (**(*pt + 1)).empname);

    printf(" Explanation \n");
    printf("(**(*pt + 1)).empname\n");
    printf("= (*(&arr + 1)).empname\n");
    printf("= (**(arr + 1)).empname\n");
    printf("= (*arr[1]).empname\n");
    printf("= (*&emp2).empname\n");
    printf("= emp2.empname = Alex\n");

    printf(" Employee ID: %d\n", (*(*pt + 1))->empid);
    printf("------\n");
    printf("(*(*pt + 1))-> empid\n");
    printf("= (**(*pt + 1)).empid\n");
    printf(" emp2.empid = 1002\n");

    printf("\n\n");

    return 0;
}