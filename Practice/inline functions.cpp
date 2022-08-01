#include<iostream>
using namespace std;
class student
{
public:
    void thought();
};
inline void student::thought()
    {
        cout<<"Honesty is the best policy.";
    }
int main()
{
    student priyanka;
    priyanka.thought();
}
