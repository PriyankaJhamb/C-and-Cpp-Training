/*Program to show the function strlen() function...
This function is used for finding a length of a
string. It returns how many characters are present
in a string excluding the NULL character.

strnlen():It returns length of the string if it is less than the value specified for maxlen (maximum
length) otherwise it returns maxlen value.


strlen vs sizeof
strlen returns you the length of the string stored in array, however sizeof returns the total
allocated size assigned to the array. So if I consider the above example again then the
following statements would return the below values
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char name[25];
   puts( " Enter your name to know the number of characters of your name: ");
   gets(name);
   puts("Total length of your name: ");
   printf("%d",strlen(name));

   puts("\nTotal length of your name when maximum length is 30: ");
   printf("%d\n",strnlen(name,30));
   puts("Total length of your name when maximum length is 10: ");
   printf("%d\n",strnlen(name,10));

   printf("\nTotal allocated memory to this string: %d", sizeof(name));

    return 0;
}
