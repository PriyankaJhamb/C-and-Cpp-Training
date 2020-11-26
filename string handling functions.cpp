#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char first_name[45];
    char last_name[45];
    cout<<"Enter you first_name:"<<endl;
    cin>>first_name;
    cout<<"Enter your last_name:"<<endl;
    cin>>last_name;
    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;
    cout<<"String Concatenation Function: This function is used for combining two strings together to form a single string."<<endl;
    cout<<"The full name is:  [strcat(first_name,last_name)]: "<<strcat(first_name,last_name)<<endl;//strcat() function
    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;
    cout<<"char *strncat(char *str1, char *str2, int n): It concatenates n characters of str2 to string str1. "<<endl;
    cout<<"strncat(first_name,last_name,4) : "<<strncat(first_name,last_name,4)<<endl;//strncat() function

    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;

    cout<<"String length function: This function is used for finding a length of a string."<<endl;
    cout<<"The length of the first name is [strlen(first_name)]: "<<strlen(first_name)<<endl;//strlen() function
    cout<<"The length of the last name is [strlen(last_name)]: "<<strlen(last_name)<<endl;
    cout<<"The length of the first name if limit is given [strnlen(first_name,3)]"<<strnlen(first_name,3)<<endl;//strnlen() function

    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;

    cout<<"String Compare Function: This function is used to compare two strings with each other."<<endl;
    cout<<"strcmp(first_name,last_name): "<<strcmp(first_name,last_name)<<endl;//strcmp()function
    cout<<"strncmp(first_name,last_name,3): "<<strncmp(first_name,last_name,3)<<endl;//strncmp() function


    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;
    cout<<"String Copy Function: This function is used to copy first string into the second string."<<endl;
    cout<<"strcpy(first_name,last_name): "<<strcpy(first_name,last_name)<<endl;//strcpy() function


    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;
    cout<<"String Reverse Function: This function is used to reverse the string."<<endl;
    cout<<"strrev(first_name): "<<strrev(first_name)<<"     ,strrev(last_name)   "<<strrev(last_name)<<endl;//strrev() function


    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;
    cout<<"char *strchr(char *str, int ch):It searches string str for character ch (we have given data type of ch as int, because it should be int only. The thing is when we give any character while using strchr then it internally gets converted into integer for better searching."<<endl;
    cout<<"strchr(first_name,'m'): " <<strchr(first_name,'m')<<endl;//strchr() function

    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;
    cout<<"char *strrchr(char *str, int ch): It is similar to the function strchr, the only difference is that it searches the string in reverse order"<<endl;
    cout<<"strrchr(first_name,'m'): "<<strrchr(first_name,'m')<<endl;


    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;
    cout<<"String lower function: This function is used to convert string to lower case."<<endl;
     cout<<"strlwr(last_name): "<<strlwr(last_name)<<endl;//strlwr() fucntion


    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;
    cout<<"String upper function: This function is used to convert string into upper case."<<endl;
    cout<<"strupr(last_name): "<<strupr(last_name)<<endl;//strupr() function

    cout<<endl;
    cout<<"First_name= "<<first_name<<endl;
    cout<<"last_name= "<<last_name<<endl;

    cout<<"char *strstr(char *str, char *srch_term): It is similar to strchr, except that it searches for string srch_term instead of a single char."<<endl;
    cout<<"strstr(last_name,'BM'): "<<strstr(last_name,"BM")<<endl;//strstr() function
}
