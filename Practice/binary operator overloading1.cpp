#include<iostream>
using namespace std;
class number
{
private:
    int x;
    int y;
public:
    void input()
    {
     cout<<"Enter first number:";
     cin>>x;
     cout<<"Enter second number:";
     cin>>y;
    }
    void show()
    {
        cout<<"\nx="<<x;
        cout<<"\ny="<<y;
    }
    number operator+(number n2)
    {
        number n4;
        n4.x=x+n2.x;
        n4.y=y+n2.y;
    }
};
int main()
{
    number n1,n2;
    n1.input();
    n2.input();
    number n3;
    n3=n1+n2;
    n3.show();
}
