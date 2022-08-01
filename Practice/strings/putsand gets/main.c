/*Program to show work of puts and gets function....
The puts function prints the string on an output device and moves the cursor back to the first
position. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nickname[20];
 /* Console display using puts */
 puts("Enter your Nick name:");
 /*Input using gets*/
 gets(nickname);
 puts(nickname);
    return 0;
}
