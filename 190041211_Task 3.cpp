#include <bits/stdc++.h>
using namespace std;
class Bank_Account
{
private:
    char name[30];
    int acc_num;
    char type[10];
    float bal=0;


public:

    void customerDetails()
    {
        cout<<"Type name: ";
        scanf ("%s", name);
    }

    void accountType()
    {
        cout<<"What type of account: ";
        scanf ("%s", type);
    }

    void balance()
    {
        cout<<"Balance: "<<bal<<endl;
   //     printf ("%f", balance);
    }

    void deposit()
    {
        int n;
        cout<<"The amount you wanna deposit: ";
        cin>>n;
        bal += n;
    }

    void withdraw()
    {
        int n;
        cout<<"The amount you wanna withdraw: ";
        cin>> n;
        if ((bal-n)>=0) bal -= n;
    }

    void display ()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account type: "<<type<<endl;
        cout<<"Balance: "<<bal<<endl;

    }

};
int main ()
{
        Bank_Account a;
        a.customerDetails();
        a.accountType();
        a.balance();
        a.deposit();
        a.withdraw();
        a.display();
}
