#include <iostream>
using namespace std;

class bank
{
private:
    int balance;
public:
    string holdername;
    long int accountno;

    bank()
    {
        balance=1500;
        holdername="NULL";
        accountno=0;
    }
    void get()
    {
        cout<<"enter the account holder name:"<<endl;
        cin>>holdername;
        cout<<"enter the account number"<<endl;
        cin>>accountno;
        cout<<"your balance is :"<<balance<<endl;
    }
    void Deposite(int d)
    {
        balance=balance+d;
        cout<<"now your balance is:"<<balance<<endl;
    }
    void withdraw(int w)
    {
        if(balance<=w)
        {
            cout<<"there is no more money"<<endl;
        }
        else
        {
        balance=balance+w;
        cout<<"now your balance is:"<<balance<<endl;
        }
    }

};
int main()
{
    bank b;
   b.get();
   int n;
   int d,w;
   cout<<"If you are deposite then write '1' and withdraw then '0' "<<endl;
   cin>>n;
   if(n==1)
   {
     cout<<"how many rupees in deposite:"<<endl;
     cin>>d;
     b.Deposite(d);
   }
   else
   {
     cout<<"how many rupees in withdraw:"<<endl;
     cin>>w;
     b.Deposite(w);
   }
}
