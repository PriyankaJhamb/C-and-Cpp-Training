#include<iostream>
using namespace std;
class base
{
    int i;
};
class derived: public base{ };
int main()
{
    cout<<sizeof(derived)<<endl;
}
