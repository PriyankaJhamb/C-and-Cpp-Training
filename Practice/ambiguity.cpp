#include<iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<"\nbase";
    }
};
class derived1:public base
{
    public:
    void display()
    {
        cout<<"\nderived1";
    }
};
class derived2:public derived1
{
    public:
    void display()
    {
        cout<<"\nderived2";
    }
};
int main()
{
    derived2 d;
    d.display();
    d.base::display();
    d.derived1::display();
}
