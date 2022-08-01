//to interchange the values of two variables
#include<iostream>
using namespace std;
class calculate
{
private:
    int a, b;
public:
    void input()
    {
        cout<<"Enter first number:";
        cin>>a;
        cout<<"Enter second number:";
        cin>>b;
    }
    void interchange()
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void display()
    {
        cout<<"first number is:"<<a<<endl;
        cout<<"second number is:"<<b<<endl;
    }
};
int main()
{
    calculate obj1;
    obj1.input();
    obj1.interchange();
    obj1.display();
}
