#include<iostream>
using namespace std;
class things
{
private:
    static int number;//static data member
    public:
        static void increase()//static member function
    {
        number++;
        cout<<"number:"<<number<<endl;
    }
};
int things::number;//declaration of static member
int main()
{
//things object1,object2,object3;
//object1.increase();
//object1.display();
things::increase();//call static member function using class name and scope resolution operator
things::increase();
things::increase();
//object2.increase();
//object2.display();
//object3.increase();
//object3.display();
}
