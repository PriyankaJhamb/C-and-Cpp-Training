//Call by reference
#include <stdio.h>
int swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 10, y = 20;
    int *px=&x;
    int *py=&y;
    swap(px, py);
    printf("%d %d\n", x, y);
    return 0;
}

