#include<iostream>
using namespace std;
class base
{
private:

};
class derived1:virtual public base
{

};
class derived2:public base
{

};
class derived: public derived1, public derived2
{

};
int main()
{

cout<<sizeof(derived)<<endl;

}
