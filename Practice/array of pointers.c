//Array of pointers
#include <stdio.h>
int main()
{
   int arr[] = { 100, 200, 300, 400 };
    printf("\narr[2] %d\n ", arr[2]);//300
    printf(" arr %p\n",arr);//76767
    printf("*arr %d\n ",*arr);//100
    printf("*arr + 2 %d\n ",*arr+2);//102
    printf("arr+0 %p\n ",arr+0);//address
    printf("arr+1 %p\n ",arr+1);
    printf("arr+2 %p\n ",arr+2);
    printf("arr+3 %p\n ",arr+3);
    printf("*(arr+3) %d\n", *(arr+3));

  int  var[] = {10, 100, 200};
    int  *ptr[3];
   for (int i = 0; i < 3; i++) {
      ptr[i] = &var[i];
   }
   for (int i = 0; i < 3; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
      printf("Address of each pointer array ptr[%d] %p\n",i,ptr[i]);
   }

   return 0;
}
