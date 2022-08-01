#include<bits/stdc++.h>

using namespace std;



// function to calculate Hamming distance

int hammingDist(char *str1, char *str2)

{

 int i = 0, count = 0;

 while (str1[i] != '\0')

 {

/*Compare the Bit string and Count if they are different for each bit position*/

 if (str1[i] != str2[i])

    count++;

 i++;

 }

return count;

}


// driver code

int main()

{

 char str1[100],str2[100];

cout<<"Enter bit string 1 : ";

 cin.getline(str1,100);

cout<<"Enter bit string 2 : ";

cin.getline(str2,100);



 // function call

 cout << hammingDist (str1, str2);



 return 0;

}
