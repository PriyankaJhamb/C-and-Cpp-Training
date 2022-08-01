#include<iostream>
using namespace std;
class learn//created the class
{
    public:
        void name()
        {
            cout<<"My name is Priyanka."<<endl;
        }
        void age()
        {
            cout<<"My age is 19 years old.";
        }
};
int main()
{
    learn object; //created the object of class learn
    object.name();//calling the function name of class learn
    object.age();//calling the function age of class learn
}
