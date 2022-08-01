#include<iostream>
using namespace std;
class A
{
    int data;
public:
    A()
    {
        data=8999;
    }
    A(int data)
    {
        this->data =data;
    }
    void print()
    {
        cout<<this<<endl;
    }
};
int main()
{
    A obj1;
    obj1.print();
    A obj2(343),obj3(67),obj4;
    obj2.print();
    obj3.print();
    obj4.print();

}
