#include<iostream>
using namespace std;
class calculate
{
private:
    int n;
    int fact;
    public:
        void input()
        {
            cout<<"Enter the number:";
            cin>>n;
        }
    int factorial(int num)
    {
        if (num>0)
            return (num*factorial(num-1));// function calls itself again and again
        else
            return 1;
    }
    void displayfact()
    {
        cout<<"The factorial of "<<n<<" is: "<<factorial(n)<<endl;
    }
};
int main()
{
    calculate object[2];//array of objects
    for(int i=0;i<2;i++)
    {
    object[i].input();
    object[i].displayfact();
    }
}
