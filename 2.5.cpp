#include <iostream>
#include <cmath>
using namespace std;

class loan
{
 private:
     int ID;
     string name;
     double loanamount;
     double annualrate;
    double tenuremonths;
 public:
    loan()
    {
        ID=0;
        name=" ";
        loanamount=0;
        annualrate=0;
        tenuremonths=0;
    }
    void get()
    {
      cout<<"enter the loan id:"<<endl;
      cin>>ID;
      cout<<"Applicant Name: "<<endl;
       cin>>name;
       cout << "Loan Amount (₹): "<<endl;
       cin>>loanamount;
       cout << "Annual Interest Rate (%): "<<endl;
        cin >> annualrate;
        cout << "Loan Tenure (in months): "<<endl;
        cin >>tenuremonths;
    }
    int claculate_EMI()
    {
       double mounthlyrate= annualrate/(12*100);
       double n=mounthlyrate*loanamount*pow((1+mounthlyrate),tenuremonths);
       double d=pow((1+mounthlyrate),tenuremonths)-1;
       double emi=n/d;
       return emi;

    }


};
int main()
{
    int n;
    cout<<"Enter the number of loan applications: "<<endl;
    cin>>n;
    loan loans[n];
    for(int i=0;i<n;i++)
    {
     loans[i].get();
     cout<<"monthly EMI is:"<< loans[i]. claculate_EMI()<<endl;
    }
}
