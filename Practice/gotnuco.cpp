//to find greater of two numbers using if else
#include<iostream>
using namespace std;
class calculate
{
private:
    int a;
    int b;
public:
    calculate()
    {
        cout<<"Enter first number:";
        cin>>a;
        cout<<"Enter second number:";
        cin>>b;
    }
    int greatest()
    {
        return(a>b?a:b);//Conditional operator

    }
    int greatest_number()
    {
        cout<<"The greatest number between two numbers is: "<<greatest();
    }
};
int main()
{
    calculate obj1;
    obj1.greatest_number();
}
