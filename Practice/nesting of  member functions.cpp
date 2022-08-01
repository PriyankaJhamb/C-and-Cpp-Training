#include<iostream>
using namespace std;
class nesting
{
private:
    int rollno;
    int e,h,m,s;
public:
    void input()
    {
       cout<<"Enter the roll no. of the student: ";
       cin>>rollno;
       cout<<"English marks :";
       cin>>e;
       cout<<"Hindi Marks :";
       cin>>h;
       cout<<"Maths Marks: ";
       cin>>m;
    }
    int sum()
    {
        s=e+h+m;
        return s;
    }
   void print()
    {
        cout<<"The total marks are: "<<sum();//calling the member function
    }
};
int main()
{
  nesting priyanka;
  priyanka.input();
  priyanka.print();
return 0;
}
