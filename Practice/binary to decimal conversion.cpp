#include<iostream>
#include<math.h>
using namespace std;
class calculate
{
    int num,max_length,remainder,temp,result=0,j,check_num;
public:
    void binary_to_decimal()
    {
        cout<<"Enter the total number of bits of your binary number: "<<endl;
        cin>>max_length;
        cout<<"Enter the binary number you want to convert binary to decimal: "<<endl;
        cin>>num;

        temp=num;
        //Checking the number whether it is binary number or other.
        for(int i=0;i<max_length;i++)
        {
            remainder=temp%10;
            if(remainder==0 || remainder==1)
                {check_num=1;}
            else
            {
                cout<<"The number is not binary number."<<endl<<endl;
                check_num=0;
                break;
            }
            temp=temp/10;
        }

        //Converting the binary number to decimal number
        temp=num;
        for(int i=0;i<max_length;i++)
        {
            if(check_num==0)
            {
                break;
            }
            else
            {
            remainder=temp%10;
            j=pow(2, i);//pow(base,power)
            result+=remainder*j;
            temp=temp/10;
            }
        }

            //printing the decimal number if the user has entered the valid binary number
            if(check_num==0)
            {
                cout<<"Please enter valid binary number."<<endl<<endl;
                check_num=1;
                binary_to_decimal();
            }
            else
            {
              cout<<"Decimal number: "<<result<<endl;
            }
    }


};
int main()
{
    calculate obj;
    obj.binary_to_decimal();
}
