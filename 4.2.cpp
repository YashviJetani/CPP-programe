
#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;
    person(string n,int a):name(n),age(a){}
    void displaye()
    {
        cout<<"name and age is:"<<name<<age;
    }
};
class employee:public person
{
protected:
    int employeeid;
    employee(string n,int a,int id):person(n,a),employeeid(id){}
    void displayee()
    {
        displaye();
    }
};
class manager:public employee
{
    string deparment;
    public:
manager():employee("",0,0),deparment(""){}
        manager(string n,int a,int id,string de):employee(n,a,id),deparment(de){}
        void dispayeee()
        {
            displayee();
            cout<<"enter the deparment:"<<deparment;
        }
        ~manager()
        {

        }
};
int main()
{
    manager m;
    string de,n;
    int id,a;
    cout<<"name:";
    cin>>n;
    cout<<"age:";
    cin>>a;
    cout<<"id:";
    cin>>id;
    cout<<"deparment:";
    cin>>de;
    manager(n,a,id,de);
    m.dispayeee();
    return 0;
}
