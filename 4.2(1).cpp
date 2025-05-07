
#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;
    person(string n,int a):name(n),age(a){}

};
class employee:public person
{
protected:
    int employeeid;
    employee(string n,int a,int id):person(n,a),employeeid(id){}

};
class manager:public employee
{
    string deparment;
    public:
manager():employee("",0,0),deparment(""){}
        manager(string n,int a,int id,string de):employee(n,a,id),deparment(de){}
void display()
{
    cout<<"name is:"<<name<<endl;
    cout<<"age is:"<<age<<endl;
    cout<<"id is:"<<employeeid<<endl;
    cout<<"deparment is:"<<deparment<<endl;
}
int idee() const
{
    return employeeid;
}

        ~manager()
        {

        }
};
int main()
{

    string de,n;
    int id,a,r;
    cout<<"enter number of manager:"<<endl;
    cin>>r;
     manager m[r];
    for(int i=0;i<r;i++)
    {
    cout<<"name:";
    cin>>n;
    cout<<"age:";
    cin>>a;
    cout<<"id:";
    cin>>id;
    cout<<"deparment:";
    cin>>de;
   m[i]=manager(n,a,id,de);
    }
    cout<<"enter the id you can see details"<<endl;
    cin>>id;
    bool f=false;
    for(int i=0;i<r;i++)
    {
    if(id==m[i].idee())
    {
       m[i].display();
       f=true;
       break;
    }
    if(f!=false)
    {
      cout<<"not exiting id"<<endl;
    }

    }
    return 0;
}
