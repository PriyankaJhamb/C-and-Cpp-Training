/*Program to show the function of fprintf function:
fputs() function
The fputs() needs the name of the string and a pointer to where you want to display the text.
We use stdout which refers to the standard output in order to print to the screen.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char town[40];
 printf("Enter your town: ");
 gets(town);
 fputs(town,stdout);
    return 0;
}
