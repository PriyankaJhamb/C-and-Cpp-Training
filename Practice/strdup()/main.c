#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char s1[25];
   char s2[45]={"my"};
   puts(" Enter  your name:");
   gets(s1);
   strset(s1,s2);
   puts(s1);

    return 0;
}
