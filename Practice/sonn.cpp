#include<iostream>
using namespace std;
class calculate
{
private:
    int a;
    int b;
public:
    void input()
    {
        cout<<"Enter first number:";
        cin>>a;
        cout<<"Enter second number:";
        cin>>b;
    }
    int sum()
    {
        int s;
        s=a+b;
        return s;
    }
    void display()
    {
        cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum()<<endl;
    }
};
int main()
{
    calculate obj1;
    obj1.input();
    obj1.display();
}

