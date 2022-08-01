#include<iostream>
using namespace std;
class add
{
private:
    int arr[50],sum=0;
  public:
      add()
      {
          int i=0;
          cout<<"Enter the numbers upto 50 numbers: "<<endl;
          do
          {

              sum=sum+arr[i];}
              i++;
               cin>>arr[i];
        }
          while (arr[i]==0)
            cout<<"sum: "<<sum<<endl;
      }
};
int main()
{
    add obj1;
}
