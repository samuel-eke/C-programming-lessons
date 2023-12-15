#include <stdio.h>
int main()
{
    int myNumbers[] = {234, 2, 55, 65, 1, 53};
    int i;
    myNumbers[4] = 99;
    printf("%d", myNumbers[3]);
    printf("\n%d", myNumbers[4]);
    printf("\n----------------------------\n");
    for (i=0; i < 6; i++) {
        printf("%d\n", myNumbers[i]);
    }
}
