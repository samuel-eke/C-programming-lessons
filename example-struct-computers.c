#include <stdio.h>
struct comp_template {
    char c_name[40];
    int ram;
    int hdd;
    char color [18];
};

int main()
{
//    struct comp_template computer1 = {"apple", 4, 500, "orange"};
//    printf("The details of our computer are: %s, %dGB, %dGB Hard disk, and color %s", computer1.c_name, computer1.ram, computer1.hdd, computer1.color);
    struct comp_template computer;
    computer.ram = 49;
    printf("Ram size %d", computer.ram);

    strcpy(computer.color, "pink color");
    printf("\n my laptop is %s", computer.color);

}
