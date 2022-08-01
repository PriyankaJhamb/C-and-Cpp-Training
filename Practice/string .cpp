#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char first_name[50];
    char last_name[50];
    cout<<"Enter you first_name:"<<endl;
    cin>>first_name;
    cout<<"Enter your last_name:"<<endl;
    cin>>last_name;
    cout<<"The full name is: "<<strcat(first_name,last_name)<<endl;//string concatination function
    cout<<"The length of the first name is: "<<strlen(first_name)<<endl;//string length function
    cout<<"The length of the last name is: "<<strlen(last_name)<<endl;
    cout<<strcmp(first_name,last_name)<<endl;//string compare function
    cout<<strnlen(first_name,3)<<endl;//strnlen() function
    cout<<strncmp(first_name,last_name,3)<<endl;//strncmp() function
    cout<<strncat(first_name,last_name,4)<<endl;//strncat() function
    cout<<strcpy(first_name,last_name)<<endl;//string copy function
    cout<<strrev(first_name)<<"    "<<strrev(last_name)<<endl;//string reverse function
    cout<<strchr(first_name,'m')<<endl;//strchr() function
    cout<<strlwr(last_name)<<endl;//string lower fucntion
    cout<<strupr(last_name)<<endl;//string upper function
    cout<<strstr(last_name,"BM")<<endl;//strstr() function
}
