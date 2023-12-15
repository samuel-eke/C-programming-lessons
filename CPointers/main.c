#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age = 10;
    int re = 10;
    printf("%p\n", &age); //this is how to find the memory address of variables
    printf("%p", &re);
}
