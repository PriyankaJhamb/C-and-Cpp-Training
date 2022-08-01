#include<iostream>
using namespace std;
class exceptionhandling
{
private:
    int x;
public:
    void handling() throw(char, int)
    {
        cout<<"Enter the value: "<<endl;
        cin>>x;

        switch(x)
        {
            case 1:
                throw ('x');
                break;
            case 2:
                throw (float(x));
                break;
            case 3:
                throw (x);
                break;
        }
    }

};
int main()
{
    exceptionhandling obj;
    try
    {
    obj.handling();
    }
    catch (char i)
    {
        cout<<"char exception"<<endl;
    }
    catch (int j)
    {
        cout<<"int exception"<<endl;
    }
    catch(float k)
    {
        cout<<"float exception"<<endl;
    }
    catch (int l)
    {
        cout<<"int exception 2nd"<<endl;
    }
}
/*#include<iostream>
using namespace std;
class exceptionhandling
{
private:
    int a;
    float b;
public:
    void handling()
    {
        cout<<"Enter the valid values: "<<endl;
        cin>>a>>b;
    try
    {
        if(b!=0)
           {cout<<"a/b ="<<a/b<<endl;}
        else
           {throw(b);}
    }
    catch(float i)
    {

        do
        {

            cout<<"Again Enter the valid values: "<<endl;
            cin>>a>>b;

        }
        while (b==0);

       cout<<"a/b ="<<a/b<<endl;
    }
    }
};
int main()
{
    exceptionhandling obj;
    obj.handling();
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    try
    {
        if(b!=0)
           {cout<<"a/b ="<<a/b<<endl;}
        else
           {throw(b);}
    }
    catch(float i)
    {

        do
        {

            cout<<"Again Enter the valid values: "<<endl;
            cin>>a>>b;

        }
        while (b==0);

       cout<<"a/b ="<<a/b<<endl;
    }
}
*/
