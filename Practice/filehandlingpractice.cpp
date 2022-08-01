#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream object_name;
    string line;

    cout<<"Opening the file with reading mode"<<endl;
    object_name.open("file_name", ios::in);
    while(object_name)
    {
        getline(object_name,line);
        cout<<line<<endl;
    }
    object_name.close();

    cout<<"Opening the file with reading mode"<<endl;
    cout<<"After using seekg(4) pointer"<<endl;
    object_name.open("file_name", ios::in);
    object_name.seekg(4);
    while(object_name)
    {
        getline(object_name,line);
        cout<<line<<endl;
    }

    int i=object_name.tellg();
    cout<<"current position: "<<i<<endl;
    object_name.close();

    cout<<"Opening the file with writing mode and append mode"<<endl;
    object_name.open("file_name", ios::out | ios::app);
    cout<<"Enter your content: "<<endl;
    while(object_name)
    {
        getline(cin,line);
        if(line=="1")
            break;
        object_name<<line<<endl;
    }
    object_name.close();

    cout<<"Opening the file with writing mode and append mode"<<endl;
    object_name.open("file_name", ios::out | ios::app);
    cout<<"After using seekp(14, ios::beg) pointer"<<endl;
    object_name.seekp(14, ios::beg);
    cout<<"Enter your content: "<<endl;
    while(object_name)
    {
        getline(cin,line);
        if(line=="1")
            break;
        object_name<<line<<endl;
    }
    int j=object_name.tellp();
    cout<<"current position: "<<j<<endl;
    object_name.close();

    cout<<"Opening the file with reading mode"<<endl;
    object_name.open("file_name", ios::in);
    cout<<"File content: "<<endl;
    while(object_name)
    {
        getline(object_name,line);
        cout<<line<<endl;
    }
    object_name.close();
}
