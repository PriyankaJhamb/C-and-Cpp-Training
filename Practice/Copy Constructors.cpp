#include<iostream>
using namespace std;
class constructor
{
    int inum1,inum2;
public:
    constructor(int, int);
    constructor(constructor&);
    void sumdata();
};
constructor::constructor(int ix, int iy)
{
    inum1=ix;
    inum2=iy;
}
constructor::constructor(constructor&C2)
{
    inum1=C2.inum1;
    inum2=C2.inum2;
}
void constructor::sumdata()
{
    cout<<"\nSum is: "<<inum1+inum2;
}
int main()
{
    constructor C1(10,20),C2(C1);
    C1.sumdata();
    C2.sumdata();

    return 0;

}
