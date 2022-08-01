//to find sum of first n natural numbers.
#include<iostream>
using namespace std;
class natural
{
private:
    int sum,n;

public:
    natural(int num)
    {
        n=num;
        sum=(n*(n+1))/2;
    }
    void display()
    {
        cout<<"The sum of "<<n<<" natural numbers are: "<<sum<<endl;
    }
};
int main()
{
    natural obj1(6);
    obj1.display();
}
