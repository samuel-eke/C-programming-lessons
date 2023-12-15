#include <stdio.h>
#include <stdlib.h>

maing()
{
    char ch;
    printf("Enter a lower case alphabet between (a - z) ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("\n Character is a vowel");
        break;
    case 'c':
        printf("\n Character is a consonant");
        break;
    default:
        printf("\n Character not defined");
        break;
    }
}
