/*Program to find the smallest number in many numbers.*/
#include <iostream>
using namespace std;
int main()
{
    int num[25],total_num,i, small;
    cout<<" How many numbers you want to compare: ";
    cin>>total_num;
    cout<<"Enter the "<<total_num<<" numbers: ";
    for(i=0;i<total_num;i++)
    {
       cin>>num[i];
    }
    small=num[0];
    for(i=1;i<total_num;i++)
    {
      if (small>num[i])
            small=num[i];

    }
    cout<< small<<" is the smallest number.";
}
