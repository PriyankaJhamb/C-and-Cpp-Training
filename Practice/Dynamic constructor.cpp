#include<iostream>
using namespace std;
class cars
{
private: string *p;
public:
    cars()
    {
        p=new string;//Dynamic constructor
        *p="Honda";
    }
    string display()
{
cout<<"The name of the company of car is :"<<*p<<endl;
cout<<"The address given to store the name of the company of car is :"<<p<<endl;
cout<<sizeof(*p)<<endl;
return (*p);
}
};
int main()
{
    cars object1;
    object1.display();
    cout<<object1.display()<<endl;
    cout<<sizeof(object1)<<endl;

}
