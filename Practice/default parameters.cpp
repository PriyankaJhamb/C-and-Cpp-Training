#include<iostream>
using namespace std;
class employee
{
private:
    string name;
    int age;
    int salary;
public:

    void details(string n,int a,int s=100000);//default parameters

};
void employee::details(string n,int a,int s)
{
    name=n;
    age=a;
    salary=s;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Salary: "<<salary<<endl;
}
int main()
{

    employee karan;
    karan.details("Karan Aujla",34);
}
