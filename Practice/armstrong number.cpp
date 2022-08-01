/*Armstrong number is a number that is equal to the sum of cubes of its digits.
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
Let's try to understand why 153 is an Armstrong number. 153 = (1*1*1)+ (5*5*5)+ (3*3*3)*/
//Program to check if a number entered is armstrong number or not.
#include<iostream>
using namespace std;
int main()
{
    int original_num,result=0,temp,remainder;
    cout<<"Enter the number to find whether it is armstrong number or not: "<<endl;
    cin>>original_num;
    temp=original_num;
    while(temp!=0)
    {
        remainder=temp%10;
        result+=remainder*remainder*remainder;
        temp=temp/10;
     }
     if(result==original_num)
         cout<<original_num<<" is armstrong number."<<endl;
     else
        cout<<original_num<<" is not armstrong number."<<endl;

}
