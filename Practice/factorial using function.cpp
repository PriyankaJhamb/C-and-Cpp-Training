/* Program to find the factorial of given number using function.*/
#include <iostream>
using namespace std;
long int fact(long int n)
{
    if (n>0)
        return (n*fact(n-1));
    else
        return 1;
}
int main()
{
  int num;
  cout<<"Enter the number to find the factorial of that number: "<<endl;
  cin>>num;
  cout<<"The factorial of the "<<num<<" is "<<fact(num);
  return 0;


}
/*Program to find the factorial of the given number without using function and using while loop*/
/*#include <iostream>
using namespace std;
int main()
{
    int num,fact,i=1;
    cout<<"Enter the number to find the factorial of that number: "<<endl;
    cin>>num;
    fact=1;
    do
    {
        fact=fact*i;
        i++;
    }
    while(i<=num);
    cout<<"The factorial of the "<<num<<" is "<<fact;
}
*/
/*Program to find the factorial of the given number using for loop*/

/*#include <iostream>
using namespace std;
int main()
{
    int num,fact,i;
    cout<<"Enter the number to find the factorial of the number: "<<endl;
    cin>>num;
    fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial of the "<<num<<" is "<<fact;
}*/
