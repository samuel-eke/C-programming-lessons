#include <stdio.h>
#include <string.h>
int main() {
char str[23];
char str1[34];
printf("Enter a string ");
gets(str);
printf("Enter another string ");
gets(str1);
printf("The length of first string is %d", strlen(str));
printf("\nThe length of the second string is %d", strlen(str1));  //the strlen returns the length of the string

}
