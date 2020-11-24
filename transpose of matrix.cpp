
/*C++ Program to find the transpose of the matrix.*/
#include <iostream>
using namespace std;
int main()
{
    int A[3][3],B[3][3],i,j;
    cout<<"Enter the 9 numbers of the matrix: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    cout<<"The transpose of the given matrix is : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }
}
