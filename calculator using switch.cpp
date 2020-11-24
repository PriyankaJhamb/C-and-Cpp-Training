#include<iostream>
using namespace std;
class calculator
{
private:
    char operat;
public:
    calculator(int num3,int num4)
    {
        cout<<"Enter the operator('*','/','+','-','%'): "<<endl;
        cin>>operat;
        switch (operat)
        {
        case '*':
            cout<<num3*num4<<endl;
            break;
        case '/':
            cout<<num3/num4<<endl;
            break;
        case '+':
            cout<<num3+num4<<endl;
            break;
        case '-':
            cout<<num3-num4<<endl;
            break;
        case '%':
            cout<<num3%num4<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
        }
    }
    calculator(double num1,double num2)//using float it will give us error
    {
        cout<<"Enter the operator('*','/','+','-','%'): "<<endl;
        cin>>operat;
        switch (operat)
        {
        case '*':
            cout<<num1*num2<<endl;
            break;
        case '/':
            cout<<num1/num2<<endl;
            break;
        case '+':
            cout<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1-num2<<endl;
            break;
       /* case '%':
            cout<<num1%num2<<endl;
            break;*/
        default:
            cout<<"Invalid input"<<endl;
        }
    }
};
int main()
{

    calculator obj2(4,4);
    calculator obj1(0.9,0.8);
}
