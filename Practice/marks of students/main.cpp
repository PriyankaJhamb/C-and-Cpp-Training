/*In this we are declare array of structure and give memory to the variables. */
#include <iostream>
#include <string.h>
using namespace std;

struct marks
{
    char name[25];
    int eng;
    int hindi;
    int maths;
    int science;
    int s_s_t;
    int punjabi;
    char computer_science;
    char drawing;

};


int main()
{
    int total,i,no_of_students;
    float avg;
    struct marks students[20];

    cout<<"Enter the number of students: \n";
    cin>>no_of_students;

    for(i=1;i<=no_of_students;i++)
    {
        cout<<"Enter the name of Roll no. "<<i<<": ";
        cin>>students[i].name;
        cout<<"Enter the marks of English: ";
        cin>>students[i].eng;
        cout<<"Enter the marks of Hindi: ";
        cin>>students[i].hindi;
        cout<<"Enter the marks of Maths: ";
        cin>>students[i].maths;
        cout<<"Enter the marks of Science: ";
        cin>>students[i].science;
        cout<<"Enter the marks of S.S.T: ";
        cin>>students[i].s_s_t;
        cout<<"Enter the marks of Punjabi: ";
        cin>>students[i].punjabi;
        cout<<"Enter the grade of Computer science: ";
        cin>>students[i].computer_science;
        cout<<"Enter the grade of Drawing: ";
        cin>>students[i].drawing;
        total=students[i].eng+students[i].hindi+students[i].maths+students[i].science+students[i].s_s_t+students[i].punjabi;
        avg=total/6;
    }
    for(i=1;i<=no_of_students;i++)
    {
       cout<<"\nRoll number "<<i<<" : ";
       cout<<"\nName: "<<students[i].name;
       cout<<"\nMarks\nEnglish: "<<students[i].eng;
       cout<<"\nHindi: "<<students[i].hindi;
       cout<<"\nMaths: "<<students[i].maths;
       cout<<"\nScience: "<<students[i].science;
       cout<<"\nS.S.T: "<<students[i].s_s_t;
       cout<<"\nPunjabi: "<<students[i].punjabi;
       cout<<"\nComputer Science: "<<students[i].computer_science;
       cout<<"\nDrawing: "<<students[i].drawing;
       cout<<"\nTotal marks: "<<total<<"\nAverage: "<<avg;
       if (total>200)
        cout<<"\nPass\n"<<"Congrats "<<students[i].name;
       else
        cout<<"\nFail\n"<<"Try again next time "<<students[i].name<<"\n Don't give up\n";
    }

    return 0;
}
