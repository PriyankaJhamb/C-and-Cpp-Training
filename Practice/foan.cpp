//to find factorial of a number
#include<iostream>
using namespace std;
class calculate
{
private:
    int num;
public:
    calculate()
    {
        cout<<"Enter the number:";
        cin>>num;
    }
    int fact(int num)
    {
        if (num>1)
            return (num*fact(num-1));
        else
            return 1;
    }
    void factorial()
    {
        cout<<"The factorial of the given number: "<<fact(num)<<endl;
    }
    void display()
    {
        cout<<"The number is:"<<num<<endl;
    }
};
int main()
{
    calculate obj2;
    obj2.display();
    obj2.factorial();
}
