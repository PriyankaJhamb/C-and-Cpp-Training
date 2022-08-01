/*Program to show: When we use scanf() to read, we use the "%s" format specifier without using the "&" to
access the variable address because an array name acts as a pointer.*/
#include <stdio.h>
int main()
{
    char name[10];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", name, &age);
    printf("You entered: %s %d",name,age);
    return 0;
}
