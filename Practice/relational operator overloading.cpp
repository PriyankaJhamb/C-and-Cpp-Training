#include<iostream>
using namespace std;
class calling
{
 int a,b,e,f;
 public:

     void swapping(int c, int d)
     {
         a=c;
         b=d;
         cout<<"a: "<<a<<endl;
         cout<<"b: "<<b<<endl;
         int temp=a;
         a=b;
         b=temp;
         cout<<"After swapping using values"<<endl;
         cout<<"a: "<<a<<endl;
         cout<<"b: "<<b<<endl;

     }
     void swappingvariables(int &g, int &h)
     {
         e=g;
         f=h;
         cout<<"e: "<<e<<endl;
         cout<<"f: "<<f<<endl;
         int temp=e;
         e=f;
         f=temp;
         cout<<"After swapping using reference variables"<<endl;
         cout<<"e: "<<e<<endl;
         cout<<"f: "<<f<<endl;
     }
};
int main()
{
    calling obj1;
    obj1.swapping(7,88);//call by value
    cout<<endl;
    int i=45,j=458;
    obj1.swappingvariables(i,j);//call by reference

}
