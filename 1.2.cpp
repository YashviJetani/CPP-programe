#include <iostream>
using namespace std;

class store
{
    public:
    string id;
    string name;
    int stock;
    int Price_Perunit;
    store()
    {
        stock=0;
       Price_Perunit=0;
    }
   void put()
   {
       cout<<"enter the product id:"<<endl;
       cin>>id;
       cout<<"enter the product name:"<<endl;
       cin>>name;
   }
   int apdatequantity(int q)
   {
      stock=stock+q;
      cout<<"stock is:"<<stock<<endl;
   }
   int prizze(int p)
   {
      Price_Perunit=p*stock;
      cout<<"prize all product quantity is:"<<  Price_Perunit<<endl;
   }
};

int main()
{
    int n,r,quantity,p;
    cout<<"how many product in the store"<<endl;
    cin>>n;
    store s[n];
for(int i=0;i<n;i++)
{
    s[i].put();
    cout<<"if you update you product qunatity then wrine 1:"<<endl;
    cin>>r;
    if(r==1)
    {
         cout<<"how qunatity update:"<<endl;
         cin>>quantity;
         s[i].apdatequantity(quantity);
    }
    cout<<"prize for per"<<endl;
    cin>>p;
    s[i].prizze(p);



}
return 0;
}
