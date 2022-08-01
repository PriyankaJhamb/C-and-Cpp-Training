// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;
class Complex{
private:
    int real, imag;
public:
    Complex(int r=0, int i=0)
    {real=r;
    imag=i;}
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real=real +obj.real;
        res.imag=imag+obj.imag;
        return res;

    }
    void print()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
    };
class Empty{};
class Test{
    public:
    Test()
    {cout<<"Constructing an object of Test"<<endl;}
    ~Test()
    {cout<<"Destructing an object of Test"<<endl;}
};
class rect
{
    int x, y;
public:
    void val(int, int );
    int area()
    {
        return(x*y);
    }
};
void rect::val(int a, int b)
{
    x=a;
    y=b;
}
class Base
{
public:
    Base()
    {
        cout<<"Base";
    }
};
class Derived: public Base
{
public:
    Derived(int i)
    {cout<<i;}
    };

/*int fun(int x=0, int y=0, int z)
    {
        return (x+y+z);
    }*/
    class P{
public:
    void print()
    {cout<<"Inside P";}
    };
    class Q:public P
    {
    public:
        void print()
        {
            cout<<"INside Q";
        }
    };
    class R: public Q{};
class testme{
int x;};
int main()
{
    R r;
    r.print();
    testme t;
    //cout<<t.x;
    //Derived d2(10);
   // cout<<fun(10);

    /*char *ptr;
    char Str[]="abcdefg";
    ptr=Str;
    ptr+=5;
    cout<<ptr;

    /*rect rect;
    rect.val(3, 4);
    cout<<"rect area:"<<rect.area();

    /*Complex c1(10, 5), c2(2,4);
    Complex c3=c1+c2;
    c3.print();
    /*try{
        Test t1;
        throw 10;
    }
    catch(int i)
    {cout<<"Caught "<<i<<endl;
    }
    char str1[10]="Hello";
    char str2[10]="World";
    char str3[10];
    int len;
    strcpy(str3, str1);
    strcat(str1, str2);
    len=strlen(str1);
    cout<<len<<endl;

    //cout<<sizeof(Empty);
    //cout<<;
/*int a=5, b=10, c=15;
int *arr[]={&a, &b, &c};
cout<<arr[1];*/
    int n;
    for(n=10; n>0; n--)
    {if(n==5)
    continue;
    cout<<n<<",";
    }
    cout<<"Fire!";

    return 0;

}
