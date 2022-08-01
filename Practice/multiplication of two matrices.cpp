
/*C++ Program to multiply two matrices
A=2 3 1
  4 0 2
  3 1 5
B=1 2 0
  4 1 3
  4 2 1
C=A*B=18 9  10
      12 12 2
      27 17 8
i=0
C[0][0]=A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0];
C[0][1]=A[0][0]*B[0][1]+A[0][1]*B[1][1]+A[0][2]*B[2][1];
C[0][2]=A[0][0]*B[0][2]+A[0][1]*B[1][2]+A[0][2]*B[2][2];
i=1
C[1][0]=A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0];
C[1][1]=A[1][0]*B[0][1]+A[1][1]*B[1][1]+A[1][2]*B[2][1];
C[1][2]=A[1][0]*B[0][2]+A[1][1]*B[1][2]+A[1][2]*B[2][2];
i=2
C[2][0]=A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0];
C[2][1]=A[2][0]*B[0][1]+A[2][1]*B[1][1]+A[2][2]*B[2][1];
C[2][2]=A[2][0]*B[0][2]+A[2][1]*B[1][2]+A[2][2]*B[2][2];

C[i][j]=A[i][0]*B[0][j]+A[i][1]*B[1][j]+A[i][2]*B[2][j];

C[i][j]=A[i][k]*B[k][j]

k=0 to 2
*/

#include <iostream>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3];
    int i,j,k,sum;
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
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+A[i][k]*B[k][j];
                C[i][j]=sum;
            }
        }

    }
    cout<<"The result of multiplication of two matrices is: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                cout<<C[i][j]<<"\t";
            }
    cout<<endl;
    }
}
