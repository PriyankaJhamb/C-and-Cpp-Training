#include<iostream>
using namespace std;
class cm
{
    float w;
public:
   cm()
   {
       w=55555555;
   }
   cm(float z)
   {
       w=z;
   }
    void display()
    {
        cout<<w<<"cm"<<endl;
    }

};
class meter
{
   float x;
public:
    meter()
    {
       x=0;
    }
    meter(float y)
    {
        x=y;
    }
    operator cm()
    {

        float w= (x*100);
        return cm(w);
    }
    void show()
    {
        cout<<x<<"m =";
    }
};

int main()
{
    meter m1(78);
    cm obj1;
    obj1=m1;//class to class type conversion
    m1.show();
    obj1.display();
}
