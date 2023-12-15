#include <stdio.h>
int main() //this program creates a structure variable and receives values into it
{
struct cat
{
    char book_name [32];
    char author [20];
    int edition;
    float price;
};
//printf ("Enter name of author "); //accepting user variables for struct variable
//scanf("%s", books.author);
//printf("Name of the author is %s", books.author);
struct cat books = {"things fall apart", "chinua achebe", 2, 32.4};// intialization of struct variable
printf("\n The new catelogue %s written by %s its the %d edition, selling for %f",
       books.book_name, books.author, books.edition, books.price);
return 0;
}
