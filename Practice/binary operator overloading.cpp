#include<iostream>
using namespace std;
class calculate
{
private:
    int n1,n2;
public:
    void input()
    {
        cout<<"Enter first number:";
        cin>>n1;
        cout<<"Enter second number:";
        cin>>n2;
    }
    calculate operator+(calculate obj2)
    {
        calculate obj3;
        obj3.n1=n1+obj2.n1;
        obj3.n2=n2+obj2.n2;
    }
    void display()
    {
        cout<<n1<<endl<<n2<<endl;
    }
};
int main()
{
    calculate obj1,obj2,obj4;
    obj1.input();
    obj2.input();
    obj4=obj1+obj2;
    obj4.display();

}
