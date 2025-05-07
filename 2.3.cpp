#include<iostream>
using namespace std;
class bank
{
    string acc_holder;
    int acc_no;
    long int current_balance;

public:
    bank()
    {
        acc_holder="no value";
        acc_no=0;
        current_balance=0;

    }
    bank(string ah,long int cb)
    {
        acc_holder=ah;
        current_balance=cb;
    }
    int deposites()
    {
       long  int deposite;
        cout<<"enter deposite:"<<endl;
        cin>>deposite;
        return deposite;
    }
    int current_bal(int in,long int d)
    {
        long int w;
        int p;
        current_balance=in;
         current_balance=in+d;
        //current_balance=+;
        cout<<"balance is"<<current_balance<<endl;
        cout<<"if you want withdraw then 1"<<endl;
        cin>>p;
        if(p==1)
        {
            cout<<"enter withdraw"<<endl;
            cin>>w;
            if(w<=current_balance)
            {
            current_balance=current_balance-w;
            cout<<"Current balance is:"<<endl<<current_balance;
            }
            else{
                cout<<"you can not applied"<<endl;
            }
        }

    }


};
int main()
{
    string h;
    int no,n;
    long int ba,c,in,d;
    cout<<"how many people creat account: ";
    cin>>n;
    bank b[n];
    for(int i=0; i<n; i++)
    {
        cout<<"create account:"<<endl;
        cout<<"Enter accont holder name:"<<endl;
        cin>>h;
        cout<<"account number:"<<endl;
        cin>>no;
        cout<<"if you initial blance then enter 1 otherwise 0:"<<endl;
        cin>>ba;
        if(ba==1)
        {
            cout<<"enter initial balnce:"<<endl;
            cin>>in;

        }
        else
        {
            in=0;
        }
       d= b[i].deposites();
        b[i].current_bal(in,d);
        b[i]=bank(h,no);
    }
    return 0;

}
