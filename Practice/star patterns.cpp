/*C++ Program to making Star patterns of user choice.*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of stars you want: ";
    cin>>n;
    cout<<"first star pattern"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Second star pattern"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            {
                cout<<"*";
            }
    cout<<endl;
    }
}
