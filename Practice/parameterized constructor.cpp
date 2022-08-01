#include<iostream>
using namespace std;
class constructor
{
    int inum1,inum2;
public:
    constructor(int, int);
    void sumdata();
};
constructor::constructor(int ix, int iy)
{
    inum1=ix;
    inum2=iy;
}
void constructor::sumdata()
{
    cout<<"\nSum is: "<<inum1+inum2;
}
int main()
{
    constructor C(10,20);
    C.sumdata();
    return 0;

}
