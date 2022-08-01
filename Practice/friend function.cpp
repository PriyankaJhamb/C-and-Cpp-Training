#include<iostream>
using namespace std;
class calculate
{
private:
    float a,b;
public:
    void setvalue(float c,float d)
    {
        a=c;
        b=d;
    }
    friend float average(calculate object1);//declare function as friend
};
float average(calculate object1)
{
    return ((object1.a+object1.b)/2);
}
int main()
{
    calculate object1;
    object1.setvalue(45,64);
    cout<<"The average of two given numbers are :"<<average(object1);//friend function call
}
