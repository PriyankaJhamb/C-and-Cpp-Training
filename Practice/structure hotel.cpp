/*. Define a structure that can describe a hotel. It should have members that include the name, address, grade,
 average room charge, and the number of rooms. Write a c++ program to perform the following operations:

a. To printout hotels of a given grade in order of charges

b. To printout hotels with room charges less than a given value.
*/
#include <iostream>
using namespace std;
struct hotel
{
    char name[25];
    char address[50];
    char grade;
    int avg_room_charge;
    int no_of_rooms;
};
int main()
{
   struct hotel information[100];
   int size,i;

   //No. of hotels do you want to register information
   cout<<"NUMBER OF HOTELS ABOUT WHICH YOU WANT TO UPLOAD INFORMATION: ";
   cin>>size;
   for(i=0;i<size;i++)
   {
       cout<<"Hotel no."<<i+1<<endl;
       cout<<"Name of the hotel:";
       cin>>information[i].name;
       cout<<"Address of the hotel: ";
       cin>>information[i].address;
       cout<<"Average room charge: Rs.";
       cin>>information[i].avg_room_charge;
       cout<<"Number of rooms in the hotel: ";
       cin>>information[i].no_of_rooms;
       if(information[i].avg_room_charge>=4000)
        information[i].grade='A';
       else if(information[i].avg_room_charge>2000 && information[i].avg_room_charge<4000)
        information[i].grade='B';
       else if(information[i].avg_room_charge<=2000 && information[i].avg_room_charge>=0)
        information[i].grade='C';
   }
   //printout hotels of a given grade in order of charges
   char wanted_grade;
   cout<<"Which hotel information do you want: TYPE THE GRADE: A OR B OR C    "<<endl;
   cin>>wanted_grade;

   for(i=0;i<size;i++)
   {
       if(information[i].grade==wanted_grade)
        {
            cout<<"Name of the hotel: "<<information[i].name<<endl;
            cout<<"Address of the hotel: "<<information[i].address<<endl;
            cout<<"Average room charge: Rs."<<information[i].avg_room_charge<<endl;
            cout<<"Number of rooms in the hotel: "<<information[i].no_of_rooms<<endl;
            cout<<endl;
            cout<<endl;
        }

   }
   //printout hotels with room charges less than a given value.
   int wanted_price;
   cout<<"Which hotel information do you want: TYPE THE PRICE BELOW WHICH YOU WANT : Rs.";
   cin>>wanted_price;
   cout<<endl;

   for(i=0;i<size;i++)
   {
       if(information[i].avg_room_charge<wanted_price)
       {
           cout<<"Name of the hotel: "<<information[i].name<<endl;
            cout<<"Address of the hotel: "<<information[i].address<<endl;
            cout<<"Average room charge: Rs."<<information[i].avg_room_charge<<endl;
            cout<<"Number of rooms in the hotel: "<<information[i].no_of_rooms<<endl;
            cout<<endl;
            cout<<endl;
       }
   }
}

