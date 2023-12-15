#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int i, j;
    i =12;
    j=24;
    printf("i and j before swapping: %d %d\n", i, j);
    swap(&i, &j);
    printf("i and j after swapping: %d %d\n", i, j);
    return 0;
}
void swap(int *x, int *y) {
int temp;
temp = *x;
*x = *y;
*y = temp;
}
//int main ()
//{
//    char stri[10];
//    printf("Enter a string");
//    gets(stri);
//    printf("the entered string is: ");
//    puts(stri);
//}
