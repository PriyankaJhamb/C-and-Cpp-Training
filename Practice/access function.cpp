
#include<iostream>
using namespace std;
class item
{ int number;
float cost;
public:
void getdata(int a,float b);

void putdata()
{
cout<<number<<cost;
}
};
void item:: getdata(int a, float b)
{ number=a;
cost=b;
}
int main()
{
item x;
x.getdata(100,299.95);
x.putdata();
item y,z;
y.getdata(200,175.50);
z.getdata(300,555.25);
y.putdata();
z.putdata();
return 0;
}
