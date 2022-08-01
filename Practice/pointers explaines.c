//Program in c
#include<stdio.h>
int main()
{
   int a=10;
   printf("%p\n",&a);//10


//Concept of pointers


   int  value = 45;
   int  *p;//*
   p = &value;
   printf("\nValue is %d",value);//45
   printf("\nAddress of value variable: %p\n", &value  );//87878
   printf("\nAddress stored in p variable: %p\n", p );//87878
   printf("\nValue of pointer variable: %d\n", *p );

  //Addition through pointer

    int c = 20 , b = 30;
    int *pc = &c , *pb = &b;

    printf("Result %d\n",*pc + *pb);//20+30

 return 0;
 }
