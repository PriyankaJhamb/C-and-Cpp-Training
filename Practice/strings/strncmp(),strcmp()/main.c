/* Program to show the function of strcmp() and strncmp() function:
strcmp(): It compares two strings.
strncmp(): It compares first n characters of two strings.*/
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
 /* below it is comparing first 8 characters of s1 and s2*/
 if (strncmp(s1, s2, 8) ==0)
 {
 printf("string 1 and string 2 are equal");
 }else
 {
 printf("string 1 and 2 are different");
 }
 if(strcmp(s1,s2)==0)
    printf("\nString 1 and String 2 are perfectly equal.");
 else
    printf("\nString 1 and string 2 are not perfectly equal.");
    return 0;
}
