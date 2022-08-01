/*Program to find the largest numbers in many numbers. */
#include <iostream>
using namespace std;
int main()
{
    int num[25],total_num,i, large;
    cout<<" How many numbers you want to compare: ";
    cin>>total_num;
    cout<<"Enter the "<<total_num<<" numbers: ";
    for(i=0;i<total_num;i++)
    {
       cin>>num[i];
    }
    large=num[0];
    for(i=1;i<total_num;i++)
    {
      if (large<num[i])
            large=num[i];

    }
    cout<< large<<" is the largest number.";
}
