/*C++ program to sort the list of numbers*/
#include <iostream>
using namespace std;
int main()
{
    int x[25],i,j,n,temp;
    cout<<"How many numbers you want to sort: ";
    cin>>n;
    cout<<"Enter the "<<n<<" numbers: ";
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    /*Sorting started*/
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
               {
                   temp=x[i];
                   x[i]=x[j];
                   x[j]=temp;
               }
        }
    }
    /*Sorting ends*/
    cout<<"The sorted list of given numbers is: ";
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
    }
}
