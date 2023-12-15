#include <stdio.h>
#include <string.h>
int main() {
char str[23];
char str1[34];
printf("Enter a string ");
gets(str);
printf("Enter another string ");
gets(str1);
printf(strcpy(str1, str)); //the strcpy copies string from one to another

}
