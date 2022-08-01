//to print fibonacci series
#include<iostream>
using namespace std;
class calculate
{
private:
    int n,s;
public:
    calculate()
    {
        cout<<"Enter the number of elements of series you want:";
        cin>>n;
    }
    int fibo(int s)
    {
        if (s==0)
        return 0;
        else if(s==1)
            return 1;
        else if(s>1)
            return (fibo(s-1)+fibo(s-2));
    }
    void fibonacci()
    {
        for(int i=1;i<=n;i++)
        {
            cout<<fibo(i)<<endl;
        }
    }
};
int main()
{
    calculate obj2;

    obj2.fibonacci();
}
