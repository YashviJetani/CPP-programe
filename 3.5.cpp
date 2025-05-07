#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,num=0,co=0,numm,p=0,s;
    cout<<"enter the number:"<<endl;
    cin>>n;
    numm=n;
    while(n!=0)
    {
        num=n%10;
        p=num+p;
        n=n/10;
        co++;
    }
   n=numm;
  cout<<"count is"<<co<<endl;
  cout<<"sum is:"<<p<<endl;
  s=p*co;
  cout<<s<<endl;
  num=0,p=0;
  while(s!=0)
  {
    num=s%10;
    p=num+p;
    s=s/10;
  }
 cout<<"total is:"<<p<<endl;

    return 0;
}
