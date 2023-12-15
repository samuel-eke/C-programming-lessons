#include <stdio.h>
int main()
{
    double gpa = 3.23;
    double *gpa_point = &gpa;
    printf("%p", gpa_point); //this line gives us the memory address of a variable
    printf("\n%f", *gpa_point);

}
