#include <stdio.h>
int swap(int* x, int* y)//*x=&x
{
    int temp = *x;//10
    *x = *y;//20
    *y = temp;//10
}
int main()
{
    int x = 10, y = 20;

    swap(&x, &y);//*p=&x
    printf("%d %d\n", x, y);
    return 0;
}

