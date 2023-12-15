#include <stdio.h>
double addNumber(int a, double b)
{
    return a / b;
}
int main()  //this program will accept two numbers from a user and calculate those numbers
{
int first_num;
double sec_num;
printf("Please enter number ");
scanf("%d", &first_num);
printf("\nPlease enter the second number ");
scanf("%lf", &sec_num);

printf("The final answer is %lf", addNumber(first_num, sec_num));
return 0;
}

