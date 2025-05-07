#include <iostream>
#include <cstring>
using namespace std;

class Account {
private:
    int accountNumber;
    string holderName;
    double balance;
     int totalAccounts;

public:
    Account()
    {
        accountNumber = 0;
       holderName=" ";
        balance = 0;
        totalAccounts=0;
    }
    void create(int ac,string h,double b)
    {
        accountNumber=ac;
         holderName=h;
          balance=b;
    }
    void display()
    {

        cout<<"account number is:"<<accountNumber<<endl;
        cout<<"holder name is:"<<holderName<<endl;
        cout<<" intial balance is:"<<balance<<endl;
    }
    int account()
    {
        return accountNumber;
    }

};
int main()
{
    Account a[10];
    double b;
    string h;
    int ac;
    int c,anum=0;
    do{
    cout<<"\n1.creat account \n2.display account \n3.transfer money \n4.show total account \n5.exists"<<endl;
    cout<<"enter the choice:";
    cin>>c;

    switch(c)
    {
    case 1:
        {

            cout<<"enter the account number:";
            cin>>ac;
            cout<<"enter the holder name:";
            cin>>h;
            cout<<"enter the  intial balance:";
            cin>>b;
            a[anum].create(ac,h,b);
            anum++;
            break;

        }
    case 2:
        {
            for(int i=0;i<anum;i++)
            {
                cout<<"account:"<<i+1;
         a[i].display();

            }
             break;
        }
    case 3:
        {
            int spe,rec;
            double amount;
          cout<<"enetr the sender account number:";
          cin>>spe;
          cout<<"enter the recive  account number:";
          cin>>rec;
          cout<<"enter the amount:";
          cin>>amount;
          for(int i=0;i<anum;i++)
          {
            if(a[i].account()==spe && a[i].account()==rec)
            {
                cout<<"senter succescefuuly trancfer"<<endl;
          cout<<" receve transfer sucesfully"<<endl;
            }
            else
            {
                cout<<"does not exist"<<endl;
            }
          }
          break;
        }
    case 4:
        {
            cout<<"total creat account is:"<<anum<<endl;

            break;
        }
    case 5:
        {
            cout<<"exists"<<endl;
        }

    }
    }while(c!=5);
}
