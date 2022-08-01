#include<iostream>
using namespace std;
class constructor
{
    int inum1,inum2;
public:
    constructor();
    void sumdata();
};
constructor::constructor()
{
    inum1=5;
    inum2=6;
}
void constructor::sumdata()
{
    cout<<"\nSum is: "<<inum1+inum2;
}
int main()
{
    constructor C;
    C.sumdata();
    return 0;

}
