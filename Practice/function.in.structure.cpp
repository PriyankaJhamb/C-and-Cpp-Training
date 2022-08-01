#include <iostream>
using namespace std;

struct student
{
    int rn;
    char name[20];
    char grade;
}s;

int main()
{
    int display(student s);
    cout << "\n Enter the Roll No., Name and Grade of the Student: ";
    cin>>s.rn>>s.name>>s.grade;
    display(s);
}
int display(student m)
{
    cout<<"\n Roll No. is :"<<m.rn;
    cout<<"\n Name. is :"<<m.name;
    cout<<"\n Grade is :"<<m.grade;
    return 0;
}
