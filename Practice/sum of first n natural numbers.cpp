/*C++ Program to find sum of first n natural numbers*/
#include <iostream>
using namespace std;
int main()
{
    int num,sum;
    cout<<"Enter the number of natural numbers: ";
    cin>>num;
    /*sum=num*(num+1)/2;//Using formula
    cout<<"The sum of first "<<num<<" natural numbers is "<<sum;*/
    //Another method
    /*sum=0;int i=1;
    do
    {
        sum=sum+i;//using do while loop
        i++;
    }
    while(i<=num);
    cout<<"The sum of first "<<num<<" natural numbers is "<<sum;*/
    //Another method
    int i;
    sum=0;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;//Using for loop
    }
     cout<<"The sum of first "<<num<<" natural numbers is "<<sum;
}
