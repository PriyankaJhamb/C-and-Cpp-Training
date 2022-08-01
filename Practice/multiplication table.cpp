/*Multiplication table*/
#include <iostream>
using namespace std;
int main()
{
    int table,i;
    cout<<"Enter the table number: ";//specific table
    cin>>table;
    for(i=0;i<=10;i++)
    {
        cout<<table<<" * "<<i<<" = "<<table*i<<endl;
    }
    int j,start_range,end_range;
    cout<<"Enter the starting range of table: ";//number of tables
    cin>>start_range;
    cout<<"Enter the ending range of table: ";
    cin>>end_range;
    for(j=start_range;j<=end_range;j++)
    {
        for(i=0;i<=10;i++)
        {
            cout<<j<<" * "<<i<<" = "<<j*i<<endl;
        }
        cout<<endl;
    }


}
