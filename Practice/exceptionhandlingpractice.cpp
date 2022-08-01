#include<iostream>
using namespace std;
class calculate
{
    int num;
public:
    void fun()
    {
        cout<<"Enter 1 for int"<<endl;
        cout<<"Enter 2 for float"<<endl;
        cout<<"Enter 3 for char"<<endl;
        cin>>num;
        int i;
        float j;
        char k;
        try
        {
        switch (num)
        {
        case 1:
            throw (i);
        case 2:
            throw (j);
        case 3:
            throw (k);
        }
        }
        catch (...)
        {
            cout<<"caught exception"<<endl;
        }

    }
};
int main()
{
    calculate obj;
    obj.fun();
}
