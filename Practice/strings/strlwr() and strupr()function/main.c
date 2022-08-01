/*program to show the function of strlwr(), strupr() and strrev() function...
String lower function is used to convert the string into lower case.
String upper function is used to convert the string into upper case.
String reverse function is used to convert the order of characters in reverse order.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char name[25];
  puts("Enter your name to see in lower and upper case characters and also in reverse order: ");
  gets(name);
  printf("Name in lowercase characters: %s",strlwr(name));
  printf("\nName in uppercase characters: %s",strupr(name));
  printf("\nName in reverse characters: %s", strrev(name));
    return 0;
}
