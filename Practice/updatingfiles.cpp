//Adding Header Files
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


class EMP_CLASS
{
    typedef struct EMPLOYEE
    {
       char name[10];
       int emp_id;
       int salary;
    }Rec;
    Rec Records;
public:
    void Create();
    void Display();
    void Update();
    void Delete();
    void Append();
    int Search();
};

void EMP_CLASS::Create()
{
    char ch='y';
    fstream seqfile;
    seqfile.open("EMP.DAT", ios::in | ios::out | ios::binary);
    do
    {
        cout<<"\n Enter name: ";
        cin>>Records.name;
        cout<<"\n Enter Emp_ID; ";
        cin>>Records.temp_id;
        cout<<"\n Enter Salary: ";
        cin>>Records.salary;

        //then write the record containing this data in the file
        seqfile.write((char*) & Records,sizeof(Records));
        cout<<"\n Do you want to add more records? y or n";
        cin>>ch;
    }while(ch=='y');
    seqfile.close();
}
void EMP_CLASS::Display()
{
    fstream seqfile;
    int n, m, i;
    seqfile.open ("EMP.DAT", ios::in | ios::out | ios::binary );
    seqfile.seekg(0, ios::beg);
    cout<<"\n The Contents of file are .... "<<endl;
    //read the records sequentially
    while(seqfile.read ((char *) &Records, sizeof(Records)))
    {
        if(Records.emp_id!=-1)
        {
            cout<<"\n Name: "<<Records.name;
            cout<<"\n Emp_ID: "<<Records.emp_id;
            cout<<"\n Salary: "<<Records.salary;
            cout<<"\n";
        }
    }
    int last_rec=seqfile.tellg();//last record position
    //formula for computing total number of objects in the file
    n=last_rec/(sizeof(Rec));
    cout<<"\n\n Total number of objects are "<<n<<"(considering logical deletion)";
    seqfile.close();
}

void EMP_CLASS::Update()
{
    int pos;
    cout<<"\n For updation ";
    fstream seqfile;
    seqfile.open("EMP.DAT", ios::in | ios::out | ios::binary);
    seqfile.seekg(0, ios::beg);
    //obtaining the position of desired record in the file
    pos=Search();
    if (pos==-1)
    {
        cout<<"\n The record is not present in the file" ;
        return;
    }
    //calculate the actual offset of the desired record in the file
    int offset=pos* sizeof(Rec);
    seqfile.seekp(offset); //seeeking the desired record for modification
    cout<<"\n Enter the values for updation... ";
    cout<<"\n Name: "; cin>>Records.name;
    cout<<"\n Emp_ID: "; cin>>Records.emp_id;
    cout<<"\n Salary: "; cin>>Records.salary;
    seqfile.write((char *)& Records, sizeof(Records))<<flush;
    seqfile.seekg(0);
    seqfile.close();
    cout<<"\n The record is updated ! ";
}
void EMP_CLASS::Delete()
{
    int id, pos;
    cout<<"\n For deletion ";
    fstream seqfile;
    seqfile.open("EMP.DAT", ios::in | ios::out |ios::binary);
    seqfile.seekg(0, ios::beg);//seeking for reading purpose
    pos=Search();//finding pos for the record to be deleted
    if(pos==-1)
    {
        cout<<"\n The record is not present in the file";
        return;
    }
    //calculate offset to locate the desired record in the file
    int offset=pos*sizeof(Rec);
    seqfile.seekp(offset);//seeking the desired record for deletion
    strcpy(Record.name);

    Records.emp_id=-1;
    Record.salary=-1;
    seqfile.write((char *) & Records, sizeof(Records))<<flush;
    seqfile.seekg(0);
    seqfile.close();
    cout<<"\n The record is Deleted ! ";
}
void EMP_CLASS::Append()
{
    fstream seqfile;
    seqfile.open("EMP.DAT", ios::ate | ios::in | ios::out |ios::binary)
    seqfile.seekg(0, ios::beg);
    int i=0;
    while(seqfile.read((char *) & Records, sizeof(Records)))
    {
        i++;//going through all the records
        //for receiving at the end of the file
    }
    //instead of above while loop
    //we can also use seqfile.seekg(0, ios::end)
    //for reaching at the end of the file
    seqfile.clear(); //turning off EOP flag
    cout<<"\n Enter the record for appending";
    cout<<"\n Name: "; cin>>Records.name;
    cout<<"\n Emp_ID: "; cin>>Records.emp_id;
    cout<<"\n Salary: "; cin>>Records.salary;
    seqfile.write((char*) &  Records, sizeof(Records));
    seqfile.seekg(0); //reposition to start
    seqfile.close();
    cout<<"\n The record is appended ! ";
}

    int EMP_CLASS::Search()
    {
        fstream seqfile;
        int id_pos;
        cout<<"\n Enter the Emp_ID for searching the record: ";
        cin>>id;
        seqfile.open("EMP.DAT", ios::ate | ios::in | ios::out | ios::binary );
        seqfile.seekg(0, ios::beg);
        id_pos=-1;
        int i=0;
        while(seqfile.read((char *) & Records.sizeof(Records)))
        {
            if(id==Records.emp_id)
            {
                pos=i;
                break;
            }
            i++;
        }
        return pos;
    }
int main()
{
    EMP_CLASS List;
    char ans='y';
    int choice,key;
    do
    {
        cout<<"\n Main Menu "<<endl;
        cout<<"\n 1 Create ";
        cout<<"\n 2 Display ";
        cout<<"\n 3 Update ";
        cout<<"\n 4 Delete ";
        cout<<"\n 5 Append ";
        cout<<"\n 6 Search ";
        cout<<"\n 7 Exit ";
        cout<<"\n Enter your choice ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            List.Create();
            break;
        case 2:
            List.Display();
            break;
        case 3:
            List.Update()
            break;
        case 4:
            List.Delete();
            break;
        case 5:
            List.Append();
            break;
        case 6:
            key=List.Search();
            if(key<1)
                cout<<"\n Record is not present in the file";
            else
                cout<<"\n Record is present in the file";break;
                case 7: exit(0);
        }
        cout<<"\n\tDo you want to go back to Main Menu?";
        cin>>ans;
    }while(ans=='y');
}





