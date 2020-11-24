#include<iostream>
using namespace std;
class sum
{
private:
    int r_c,i,j;
    int A[3][3],B[3][3],C[3][3];
public:
    void input()
    {
      cout<<"Enter nine numbers of ist square matrix: "<<endl;
      for(i=0;i<3;i++)
       {
        for(j=0;j<3;j++)
            cin>>A[i][j];
       }
     cout<<"Enter nine numbers of second square matrix: "<<endl;
     for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
            cin>>B[i][j];
      }
    }
    void addition()
    {
        for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
           C[i][j]=A[i][j]+B[i][j];
        }
      }
    }
    void print()
    {
         cout<<"The result of addition of two square matrices are: "<<endl;
         for(i=0;i<3;i++)
        {
         for(j=0;j<3;j++)
            {
                cout<<C[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main()
{
    sum object1;
    object1.input();
    object1.addition();
    object1.print();
}
