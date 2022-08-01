#include <iostream>
using namespace std;

main() {
   unsigned int a = 60;	  // 60 = 0011 1100
   unsigned int b = 13;	  // 13 = 0000 1101
   unsigned int d = 0;	  // 0 = 0000 0000
   int c = 0;

   c = a && b;//0000 1100   //12
   cout << "Line 1 - a && b is : " << c << endl ;

   c = a && d;             //000000000
   cout << "Line 2 - a && d is : " << c << endl ;


   c = a || b;             //0011 1101//32+16+8+4+1=61
   cout << "Line 3 -  a || b is: " << c << endl ;

    c = a || d;             //0011 11000=32+16+8+4=60
   cout << "Line 4 -  a || d is: " << c << endl ;


   c = !a;             //1100 0011=128+64+2+1=195
   cout << "Line 5 - !a is: " << c << endl ;

   c = !b;             //1111 0010=128+64+32+16+2=242
   cout << "Line 6 - !b is: " << c << endl ;



   return 0;
}

