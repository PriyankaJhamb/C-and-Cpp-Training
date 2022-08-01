
#include<iostream>
using namespace std;
class simpleclass
{
public:
    void show()
    {
        cout<<"show function of simple class is called."<<endl;
    }
};
int main()
{
    class localclass
    {
    public:
        void displayinformation()
        {
            cout<<"funtion displayinformation of localclass is called."<<endl;
        }
    };

    simpleclass obj1;
    obj1.show();
    localclass obj4;
    obj4.displayinformation();
}
