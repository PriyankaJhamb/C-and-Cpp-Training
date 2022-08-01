/*Program to show work of function strcat() and strncat()&& strcpy() and strncpy()
 strcat(): It appends second string to the end of first string. A terminator char (‘\0’) will always be
appended at the end of the concatenated string.

 strncat(): It appends n characters of second string to the end of first string.
 strcpy(): It copies the string str2 into string str1, including the end character (terminator char ‘\0’).
 strncpy():It is used to copy n characters of second string to first string.
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
     char s1[20];
 char s2[20];
 puts("Enter the string 1:");
 gets(s1);
 puts("Enter the string 2:");
 gets(s2);
 puts(strcat(s1,s2));//Both give same result..
 puts(s1); //This also..
 puts(s2);
 puts(strncat(s1,s2,3));
 puts(s1);
 puts(strcpy(s1,s2));
 puts(s1);
 puts(strncpy(s1,s2,3));
 puts(s1);
 puts(strcpy(s2,s1));
 puts(s1);
 puts(s2);
    return 0;
}
