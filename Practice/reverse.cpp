#include<iostream>
using namespace std;
class reverse_num
{
private:
    int r=0,y;
public:
   reverse_num(int num)
    {

        while(num!=0)
        {

            y=num%10;//assign the last number of the num
            r=r*10+y;//assigned the last number of the num
            num=num/10;//take out outside the last number to do further calculation
        }
    }
    void display()
    {
        cout<<"The reverse of the given number is: "<<r<<endl;
    }
};
int main()
{
    reverse_num obj1(3678899);
    obj1.display();
}
