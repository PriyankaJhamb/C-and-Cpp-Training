

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string name;
    ofstream obj_name("file.txt");
    cout<<"Enter your name: "<<endl;
    while (obj_name)
    {
        getline(cin, name);

    if(name=="-1")
        break;
    obj_name<<name;
    }

    obj_name.close();

    cout<<"next"<<endl;
    ifstream obj("file.txt");
while(obj)
{
        getline(obj, name);

}
cout<<name<<endl;
    obj.close();


}
