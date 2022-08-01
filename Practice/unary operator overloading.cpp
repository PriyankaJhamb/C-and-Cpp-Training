#include<iostream>
using namespace std;
class increase
{
private:
    int num;
public:
    void input()
    {
        cout<<"Enter the number:";
        cin>>num;
    }
       /* void operator++(int)
    {
        num=++num;

    }*/
    void operator--()
    {
        num=--num;
    }
    friend void operator-(increase obj2)
    {
        obj2.num=-obj2.num;
    }
    void display()
    {
        cout<<num<<endl;
    }
};
int main()
{
    increase obj1,obj2;
    obj1.input();
    obj1.display();
    //obj1++;
    obj1.display();
    --obj1;
    obj1.display();
    obj2.input();
    -obj2;
    -obj2;

    obj2.display();



}
