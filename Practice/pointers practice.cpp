#include<iostream>
using namespace std;
int main()
{
    int x,m, minute;
    int *ptr;
    ptr=&minute;
    cout<<"ptr:"<<ptr<<endl;
    cout<<"&x: "<<&x<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"&ptr: "<<&ptr<<endl;
    //Arithmetic addition of pointers
    cout<<"ptr: "<<ptr<<endl;
    ptr=ptr+1;
    cout<<"ptr=ptr+1 :"<<ptr<<endl;
    //x=ptr+ptr;//error address=address+address

    //arithmetic subtraction of pointers

    ptr=ptr-1;
    cout<<"ptr=ptr-1 :"<<ptr<<endl;

    x=ptr-ptr;
    cout<<"x=ptr-ptr: "<<x<<endl;

    int *temp;
    int z;
    int simran;
    temp=&simran;
    cout<<"&temp; "<<&temp<<endl;
    cout<<"ptr:"<<ptr<<endl;
    cout<<"temp; "<<temp<<endl;
    cout<<"sizeof(int) :"<<sizeof(int)<<endl;
    z=float(temp-ptr);
    cout<<"z=temp-ptr :"<<z<<endl;

    int *temperory;
    int u;
    temperory=&u;
    cout<<"ptr:"<<ptr<<endl;
    cout<<"temperory; "<<temperory<<endl;
    z=float(temperory-ptr);
    cout<<"z=temperory-ptr :"<<z<<endl;


}
