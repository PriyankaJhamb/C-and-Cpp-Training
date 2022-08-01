#include<iostream>
using namespace std;
class A
{
public:
    void print()
    {
        cout<<"you are very nice"<<endl;
    }
};
int main()
{
A B;
A *ptr=&B;//pointer to object of class
B.print();
(*ptr).print();
//ptr.print();//error
ptr->print();
}
