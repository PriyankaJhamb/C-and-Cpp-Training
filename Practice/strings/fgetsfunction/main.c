/*Program to show:  fgets() function which reads a specified number of characters.
The fgets() arguments are :
• the string name,
• the number of characters to read,
• stdin means to read from the standard input which is the keyboard.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[10];
printf("Enter your name plz: ");
fgets(name, 10, stdin);
printf("My name is %s ",name);
    return 0;
}
