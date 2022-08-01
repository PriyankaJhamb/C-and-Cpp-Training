/*program to check the number if the number is prime or not

Prime number: A prime number (or a prime) is a natural number greater than 1 that is not a product
 of two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number.
 For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself.
  However, 4 is composite because it is a product (2 × 2) in which both numbers are smaller than 4.


  A prime number is a whole number greater than 1, which is only divisible by 1 and itself.
   First few prime numbers are : 2 3 5 7 11 13 17 19 23 …..
  Some interesting fact about Prime numbers:

1.Two is the only even Prime number.
2.Every prime number can represented in form of 6n+1 or 6n-1 except 2 and 3, where n is natural number.
3.Two and Three are only two consecutive natural numbers which are prime too.
4.Goldbach Conjecture: Every even integer greater than 2 can be expressed as the sum of two primes.
*/
#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number to check whether it is prime or not: ";
    cin>>num;
{   for(i=2;i<num;i++)
    {
        if (num%i==0)
            break;
       }
            if (i==num)
                cout<<num<<" is a prime number."<<endl;
            else
                cout<<num<<" is not a prime number."<<endl;


}
}
/*Program to check prime numbers in the range.
     int range_start,range_end,j;
     cout<<"Enter the starting range: ";
     cin>>range_start;
     cout<<"Enter the ending range: ";
     cin>>range_end;
     for(i=range_start;i<=range_end;i++)
     {
         for(j=2;j<i;j++)
         {
             if (i%j==0)
                break;
         }
             if (j==i)
                cout<<i<<" is a prime number."<<endl;
             else
                cout<<i<<" is not a prime number."<<endl;

     }
}*/



















