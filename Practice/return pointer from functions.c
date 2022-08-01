//Return pointer from functions
#include <stdio.h>
int * start()
{
static int j[5]={2,4,6,8,10};//the use of static that we can use variables of function definition in main program
   return j;
}
int main () {
   int *p;
   p = start();
   for ( int i = 0; i < 5; i++ ) {
      printf("*(p + [%d]) : %d\n", i, *(p+i ) );
   }
return 0;
}
