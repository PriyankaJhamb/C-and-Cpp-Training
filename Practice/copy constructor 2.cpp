#include<iostream>
using namespace std;
class cars
{
private:
    string n;
public:
    cars(string a)
    {
    n=a;
    }
    void name()
    {
        cout<<"The name of the company of the car is :"<<n<<endl;
    }
};
int main()
{
     cars object1("Honda"),object2("Audi");
     cars object3(object1);//copy constructor

     object1.name();
     object2.name();
     object3.name();

}
