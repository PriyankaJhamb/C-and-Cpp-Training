/*C++ Program to Check Whether String is Palindrome or not

Palindrome means there is no change in the original and the reverse of the string.

 */
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100],rev_str[100],result;
    cout<<"Enter the string: ";
    cin.get(str,100);
     strcpy(rev_str,str);
    cout<<"The string in reverse order is: "<<strrev(rev_str)<<endl;

       result = strcmp(str, rev_str);


    if(result==0)
        cout<<"Given string is palindrome."<<endl;
    else
        cout<<"Given string is not palindrome."<<endl;

}
