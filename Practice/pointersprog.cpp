#include<iostream>
using namespace std;
class calculate
{
    int deno,num;
public:
    void fun()
    {
        num=8;
        deno=98;

        cout<<"num: "<<num<<endl;
        cout<<"this: "<<this<<endl;//this pointer points to the object itself
        cout<<"&num: "<<&num<<endl;
        cout<<"this->num: "<<this->num<<endl<<endl;

        cout<<"deno: "<<deno<<endl;
        cout<<"this: "<<this<<endl;//this pointer points to the object itself
        cout<<"&deno: "<<&deno<<endl;
        cout<<"this->deno: "<<this->deno<<endl<<endl;
    }
};
class calcu
{
    int n;
public:
    void fun()
    {
        n=9;
        cout<<"n: "<<n<<endl;
        cout<<"this: "<<this<<endl;//this pointer points to the object itself
        cout<<"&n: "<<&n<<endl;
        cout<<"this->n: "<<this->n<<endl;
    }
};
int main()
{
    calculate obj;
    cout<<"&obj: "<<&obj<<endl<<endl;
    //cout<<"this: "<<this<<endl;//this pointer points to object itself;//error comes because invalid use of 'this' in non-member function
    obj.fun();
    calcu object;
    cout<<"&object: "<<&object<<endl<<endl;
    object.fun();

}
