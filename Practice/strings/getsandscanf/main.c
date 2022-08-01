/*Program to show:The problem with the scanf function is that it never reads an entire string. It will halt the reading
process as soon as whitespace, form feed, vertical tab, newline or a carriage return occurs.
Suppose we give input as "Guru99 Tutorials" then the scanf function will never read an entire
string as a whitespace character occurs between the two names. The scanf function will only
read Guru99.
In order to read a string contains spaces, we use the gets() function. Gets ignores the
whitespaces. It stops reading when a newline is reached (the Enter key is pressed)*/


#include <stdio.h>
#include <string.h>
int main()
{
    /*char full_name[25];
    char friend_name[25];
    printf("Enter your full name: ");
    scanf("%s",full_name);
    printf("\nEnter your friend name: ");
    //scanf("%s",friend_name);
    gets(friend_name);
    printf("\nMy full name is %s ",full_name);
    printf("\nMy friends name is %s ",friend_name);
    return 0;*/
char friend_name[25];
char full_name[25];
printf("Enter your full name: ");
scanf("%s",full_name);
printf("My full name is %s ",full_name);
printf("\nEnter your friend name: ");
    gets(friend_name);
    printf("\nMy full_name is",full_name);
     printf("\nMy friend's name is %s ",friend_name);
return 0;

}
