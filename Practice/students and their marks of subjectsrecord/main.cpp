#include <iostream>

using namespace std;
struct marks
{
    char name[25];
    int subject[25];

}students[25];
int main()
{
    int no_of_students,no_of_subjects,total[24];
    cout<<"Enter the number of students: "<<endl;
    cin>>no_of_students;
    cout<<"Enter the number of subjects: "<<endl;
    cin>>no_of_subjects;

    for(int i=1;i<=no_of_students;i++)
    {
        total[i]=0;
        cout<<"Enter the name of Roll number "<<i<<endl;
        cin>>students[i].name;

        for(int j=1;j<=no_of_subjects;j++)
        {
          cout<<"Enter the marks of subject "<<j<<endl;
          cin>>students[i].subject[j];
          total[i]=total[i]+students[i].subject[j];
        }

    }
    for(int i=1;i<=no_of_students;i++)
    {
        cout<<"Roll Number "<<i<<endl;
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"Marks List"<<endl;

        for(int j=1;j<=no_of_subjects;j++)
        {
            cout<<"Subject "<<j<<": "<<students[i].subject[j]<<endl;


        }
        cout<<"Total marks: "<<total[i]<<endl;

    }

    return 0;
}
