// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int *myarray=NULL;
    myarray=new int[10];
    for(int i=0;i<10;i++)
    {

    cout<<myarray<<endl;
    myarray=myarray+1;
    }
    cout<<endl;
    cout<<myarray<<endl;
    cout<<myarray+1<<endl;
    cout<<myarray+2<<endl;
    cout<<myarray+3<<endl;

    return 0;
}
