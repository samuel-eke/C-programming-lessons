#include <stdio.h>
int food_check (char cus_name[30])
{
    char food_type [40];
    printf("\nWhat food will you like to take? ");
    scanf("%s", &food_type);
    if (food_type == 'rice')
    {
        printf ("Your food is ready");
        }else {
        printf("sorry not avaliable");
    }
    return 0;
}
int main()
{
    char user_name[30];
    char resp;
    printf("please give your Name ");
    scanf("%s", user_name);
    printf("Will you like to get food? [y/n] ");
    scanf("%s", &resp);
    if (resp == 'y')
    {
        printf("Your order will be taken shortly %s", user_name);
        food_check(user_name);
    } else {
        printf("%s Thank you for using our service", user_name);
    }
}
