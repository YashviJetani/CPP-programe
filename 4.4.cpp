#include<iostream>
using namespace std;

class BankAccount
{
protected:
    int AccountNumber;
    double Balance;
public:
    BankAccount(int AccNo, double Bal)
    {
        AccountNumber=AccNo;
        Balance=Bal;
        cout<<"Account Number:"<<AccountNumber<<endl<<"Balance:"<<Balance<<endl;
    }
    void Deposite(double Amount)
    {
        Balance+=Amount;
        cout<<"Bank Balance:"<<Balance<<endl;
    }
    void Withdraw(double Amount)
    {
        if(Amount<=Balance)
        {
            Balance-=Amount;
            cout<<"Bank Balance:"<<Balance<<endl;
        }
        else{
            cout<<"Insufficient Balance."<<endl;
        }
    }

    ~BankAccount()
    {
        cout<<"Bank Account closed."<<endl;
    }
};

class SavingAccount : public BankAccount
{
    double InterestRate;
public:
    SavingAccount(int AccNo, double Bal, double Rate): BankAccount(AccNo, Bal)
    {
        InterestRate=Rate;
        cout<<"Interest Rate:"<<InterestRate<<"%"<<endl;
    }
    void ApplyInterest()
    {
        Balance+=Balance*(InterestRate/100);
        cout<<"New Balance:"<<Balance<<endl;
    }
    ~SavingAccount()
    {
        cout<<"Saving Account Closed."<<endl;
    }
};

class CurrentAccount : public BankAccount
{
    double OverdraftLimit;
public:
    CurrentAccount(int AccNo, double Bal, double Limit): BankAccount(AccNo,Bal)
    {
        OverdraftLimit=Limit;
        cout<<"Current Account Created with overdraft limit:"<<OverdraftLimit<<endl;
    }

    void Withdraw(double amount)
    {
        cout<<"Overdraft limit exceded."<<endl;
    }
    ~CurrentAccount()
    {
        cout<<"Current Account Closed."<<endl;
    }
};

int main()
{
    int choice,AccNo;
    double Balance,Amount,Rate,Limit;

    cout<<"Enter your choice:"<<endl<<"1.Saving Account"<<endl<<"2.Current Account"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            SavingAccount S(456,500000,10);
            cout<<"Enter Amount To Deposite:";
            cin>>Amount;
            S.Deposite(Amount);
            S.ApplyInterest();
            cout<<"Enter Amount To Withdraw:";
            cin>>Amount;
            S.Withdraw(Amount);
            break;
        }
    case 2:
        {
            CurrentAccount C(568,60000,12);
            cout<<"Enter Amount To Deposite:";
            cin>>Amount;
            C.Deposite(Amount);
            cout<<"Enter Amount To Withdraw:";
            cin>>Amount;
            C.Withdraw(Amount);
            break;
        }
    default:
        {
            cout<<"Invalid Choice!!!";
        }
    }
    return 0;
}
