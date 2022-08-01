/*C++ Program to generate Fibonacci series up to a limit using recursive function.

The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms.
The first two terms of the Fibonacci sequence are 0 followed by 1.
The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
*/
#include <iostream>
using namespace std;
int fibonacci(int i)
{

    if(i==0)
        return 0;
    else if(i==1)
        return 1;
    else
        return(fibonacci(i-1)+fibonacci(i-2));

}
int main()
{
    int i,n;
    cout<<"Enter the number of elements to be generated: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<fibonacci(i)<<endl;
    }
}
