/* Program to find the result of addition and subtraction of two matrices.*/
#include <iostream>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3],D[3][3];
    int i,j,sum;
    cout<<"Enter nine numbers of ist matrix: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>A[i][j];
    }
    cout<<"Enter nine numbers of second matrix: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>B[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           C[i][j]=A[i][j]+B[i][j];
        }

    }
    cout<<"The result of addition of two matrices is: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                cout<<C[i][j]<<"\t";
            }
    cout<<endl;
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           D[i][j]=A[i][j]-B[i][j];
        }

    }
     cout<<"The result of subtraction of two matrices is: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                cout<<D[i][j]<<"\t";
            }
    cout<<endl;
    }

}
