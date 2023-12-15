#include <stdio.h>
#include <string.h>
int main() {
char str[23];
char str1[34];
printf("Enter a string ");
gets(str);
printf("Enter another string ");
gets(str1);
printf(strcat(str, str1)); //the strcat function joins two strings together

}
