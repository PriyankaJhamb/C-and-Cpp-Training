//Program to find the minimum and maximum element of an array
#include<iostream>
using namespace std;
class check
{
private:
    int array[50];
    int n,i;
public:
    void input_elements()
    {
        cout<<"How many elements you have: "<<endl;
        cin>>n;
        cout<<"Enter your "<<n<<" elements : "<<endl;
        for(i=0;i<n;i++)
        {
          cin>>array[i];
        }
    }
    void min()
    {
        int min_num;
        min_num=array[0];
        for(i=1;i<n;i++)
        {
           if(min_num>array[i])
           min_num=array[i];
        }
           cout<<"The minimum number in the given array is "<<min_num<<endl;
    }
    void max()
    {
        int max_num;
        max_num=array[0];
        for(i=1;i<n;i++)
        {
           if(max_num<array[i])
           max_num=array[i];
        }
           cout<<"The maximum number in the given array is "<<max_num<<endl;
    }
};
int main()
{
    check object1;
    object1.input_elements();
    object1.min();
    object1.max();
    check object2;
    object2.input_elements();
    object2.min();
    object2.max();
}
