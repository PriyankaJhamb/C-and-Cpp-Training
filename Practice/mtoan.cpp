//print multiplication table of a number
#include<iostream>
using namespace std;
class multiplication
{
private:
public:
    multiplication(int a)
    {
        for(int i=0;i<=10;i++)
        {
            cout<<a<<" * "<<i<<" = "<<a*i<<endl;
        }
    }
};
int main()
{
    multiplication obj1(4);
}
