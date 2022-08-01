#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class base
{
private:
    int abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz;
public:
    void f(){
           cout<<"base";
           cout<<abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz;}

};
class derived:public base
{
public:
    void f()
    {
        cout<<"derived\n";

    }
};
int main(int argc, char*argv)
{
   derived d;
   d.base::f();
   short unsigned int i=0;
   cout<<i--;//post increment
   cout<<i;
   //write `a program to check if two numbers are equal without using arithmetic operators or comparison operators// logical gates

   //write a program to divide an integer by 4 without using '/' operator.


   char a[14]="Priya";
   char b[12]="Jhamb";
   int k=strlen(a);
   int j=strlen(b);
   int n=9;
   int m=8;
   cout<<k&&j;

   if(k^j)
   {
       cout<<"\nnot same\n";
   }
   else
    cout<<"\nsame\n";
//write a program to swap the values of two variables without using any extra variable//+and - and - 3 steps required
  int y=9;
  int z=8;
  y=y+z;
  z=y-z;
  y=y-z;
  y=y*z;
  z=y/z;
  y=y/z;
  cout<<y<<endl<<z<<endl;
  //write a program to find sum of two integers without using '+''operator.
  int u;
  for(; z!=0;y++,z--)
    cout<<y<<endl;
    cout<<z<<endl;
  while (z!=0)
  {
      y++;
      z--;
  }
  cout<<y<<endl<<z;
//write a program to divide an integer by 4 without using '/' operator.
int x=24;
int c=0;
int l=0;
while(c!=x)
{
    c=c+4;
    l++;
}
cout<<l;
getch();

/*y=1+(5,6,7,8,3);
cout<<y;
unsigned int num1=2;
unsigned int num2=7;
unsigned num3;
num3=num1^num2;
cout<<"Result is::"<<num2<<'\n';
double x=28;
int k;
k=(int)x%5;
k=k>>3;
cout<<k;
int x=1,y=1,z=1;
cout<<(++x||++y&&++z);
cout<<x<<""<<y<<""<<z;
int const p=5;
cout<<++p;
cout<<sizeof('a');

int x,y;
if(x=10)
    cout<<"hello";
else
    cout<<"w";*/
   /* float f=12.44;
    cout<<(14>=5)||('A'>'B');
    cout<<(24>=35)||('A'>'B');
    int u=-5;
    if(u+5)
        cout<<"True Part";
    else
        cout<<"False Part";

float F=0.0;
int A=10;
F=10;
cout<<"Value of F:"<<F<<endl;

int a,b,c;
a=b+-c;
cout<<a;
*/


}
