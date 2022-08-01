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
        cout<<"The name of the company of the car is : "<<n<<endl;
    }
};
int main()
{
    cars object1("Honda");
    object1.name();
}
