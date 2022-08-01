#include<iostream>
using namespace std;
class student
{
   public:
       student()//Default constructor
       {
           cout<<"Default constructor"<<endl;
       }
       ~student()//Destructor
    {
        cout<<"Destructor"<<endl;
    }
};
int main()
{
    student object1;
}
