#include<iostream>
using namespace std;
int test(int x)throw(int,char)
{
    switch(x)
    {
        case 1:
            throw x;
             break;
        case 2:
            throw 'x';
            break;
        case 3:
            throw float(x);
            break;

    }
}
int main()
{
    try
    {
        test(3);
    }
    catch (int i)
    {
        cout<<"caught int exception"<<endl;
    }
    catch (float j)
    {
        cout<<"caught float exception"<<endl;
    }
    catch (char k)
    {
        cout<<"caught char exception"<<endl;
    }
}
