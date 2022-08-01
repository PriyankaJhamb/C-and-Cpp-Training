#include<iostream>
using namespace std;
class constructor
{
    int inum1,inum2;
public:
    constructor(int, int);
    ~constructor();
    void sumdata();
};
constructor::constructor(int ix, int iy)
{
    cout<<"\nHere the constructor executes";
    inum1=ix;
    inum2=iy;
}
constructor::~constructor()
{
    cout<<"\nHere the destructor executes";
}

void constructor::sumdata()
{
    cout<<"\nSum is: "<<inum1+inum2;
}
int main()
{
    constructor C1(10,20);
    C1.sumdata();


    return 0;

}
