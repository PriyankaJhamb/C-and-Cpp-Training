
/*
C String function – strchr
char *strchr(char *str, int ch)
It searches string str for character ch (you may be wondering that in above definition I have
given data type of ch as int, don’t worry I didn’t make any mistake it should be int only. The
thing is when we give any character while using strchr then it internally gets converted into
integer for better searching.

C String function – Strrchr
char *strrchr(char *str, int ch)
It is similar to the function strchr, the only difference is that it searches the string in reverse
order, now you would have understood why we have extra r in strrchr, yes you guessed it
correct, it is for reverse only.

C String function – strstr
char *strstr(char *str, char *srch_term)
It is similar to strchr, except that it searches for string srch_term instead of a single char.

You can also use this function in place of strchr as you are allowed to give single char also in
place of search_term string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mystr[30];
    puts(" Enter your data:");
    gets(mystr);
    //printf ("%s", strchr(mystr, 's'));
    //printf("\n%s", strrchr(mystr, 's'));
    //printf("\n %s", strstr(mystr,'my'));
    printf ("Output string is: %s", strstr(mystr, 'my'));
    return 0;
}
