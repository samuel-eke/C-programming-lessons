#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    char a = 'f';
    x = y = 8;
    if (a == 'y')
    {
        x = x + 5;
        printf("the numbers are %d and \t%d\n", x, y);
       } else if (a == 'f')
       {
           x = x + 9;
           printf("the numbers are %d and \t%d This is the second option", x, y);
       }
       else {
            printf("Something is not correct");
        }

}
