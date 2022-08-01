#include<iostream>
using namespace std;
class student
{
    private:int b,g;
    public:
    student(int boys)
    {
        b=boys;
      cout<<"There are only "<<b<<" boys in the class."<<endl;
    }
    student(int boys,int girls)//overloaded constructor
    {
        g=girls,b=boys;
        cout<<"There are "<<b<<" boys and "<<g<<" in the class."<<endl;
    }
};
int main()
{
    student object1(55);
    student object2(55,68);
}
