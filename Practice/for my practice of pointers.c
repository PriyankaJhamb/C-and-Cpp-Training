#include <stdio.h>
int main ()
{
   char *names[8] ={"Zara Ali","Ali"};
   for ( int i = 0; i < 8; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
      char name[8] ={"Zara Ali"};
   for ( int i = 0; i < 8; i++) {
      printf("Value of names[%d] = %c\n", i, name[i] );
   }
   return 0;
}
