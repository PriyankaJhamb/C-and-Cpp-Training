
#include<iostream>
using namespace std;
//multipath inheritance
class base
{
public:
    void display()
    {
        cout<<"display() function defined in base class:  called"<<endl;
    }
    int a;
};
class base1:virtual public base
{
public:
    void display()
    {
        cout<<"display() function defined in base1 class:  called"<<endl;
    }
    int b;
};
class base2:virtual public base
{
public:;
    void display()
    {
        cout<<"display() function defined in base2 class:  called"<<endl;
    }
    int c;
};
class derived:public base2,public base1,virtual public base
{
    public:
    void display()
    {
        cout<<"display() function defined in derived class:  called"<<endl;
    }
    int sum;
};
int main()
{
    derived d;
    d.display();//ambiguity solved by compiler using function overriding
    cout<<"Enter 3 values: "<<endl;
    cin>>d.a>>d.b>>d.c;
    d.sum=d.a+d.b+d.c;
    cout<<"sum: "<<d.sum<<endl;
}
