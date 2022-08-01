//Pointer to pointer
#include <stdio.h>
int main () {
   int  no=1000;
   int  *p1;
   int **p2;
   int ***p3;
   p1= &no;//*p1-1000
   p2= &p1;//876868
   p3=&p2;//*p3

   printf("Value of no = %d\n", no );//1000
   printf("Value available at *p1= %d\n", *p1 );//1000
   printf("Value available at **p2 = %p\n", *p2);
   printf("value at ***p3=%p\n",**p3);//1000
   return 0;
}
