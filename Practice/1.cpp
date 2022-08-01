/*Q1. Define a class to represent a bank account. Include the following members:
Data members
1.     Name of the depositor
2.     Account number
3.     Type of account
4.     Balance amount in the account
Member functions
1.     To assign initial values
2.     To deposit an amount
3.     To withdraw an amount after checking the balance
4.     To display name and balance

Write the main function also to test the program
*/
#include<iostream>
#include<string>
using namespace std;
class Bank
{
private:
    string depositor;//name of the depositor
    int acc_no;//account number
    string type_of_acc;//type of account number
    static int bal_acc;//balance amount in the bank;
    int amount;

public:
    void initial_amount()//To assign initial values
    {
        cout<<"ENTER INITIAL AMOUNT IS:"<<endl;
        cin>>bal_acc;
        cout<<"Initial amount is : "<<bal_acc<<endl;
    }
    void dep_amount()//To deposit an amount
    {
        cout<<"ENTER THE AMOUNT YOU HAVE DEPOSITED: ";
        cin>>amount;
        bal_acc+=amount;
    }
    void withdraw_amount()//To withdraw an amount after checking the balance
    {
        cout<<"ENTER THE AMOUNT YOU WNAT TO WITHDRAW: ";
        cin>>amount;
        if (bal_acc>amount)
        {
            bal_acc-=amount;
        }
        else
            cout<<"Your balance in the account is insignificant.\n So, you cannot withdraw amount.";
    }
    void display()//To display name and balance
    {
        cout<<"The name of the depositor is : "<<endl;
        cin>>depositor;
        cout<<"The balance in the account is : "<<bal_acc<<endl;
        cout<<"THe name of the depositor is: "<<depositor<<endl;
    }


};
int Bank::bal_acc;
int main()
{
    Bank obj;
    obj.initial_amount();
    obj.dep_amount();
    obj.withdraw_amount();
    obj.display();
}
