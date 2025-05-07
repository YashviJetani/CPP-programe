
#include<iostream>
#include<vector>
using namespace std;

class employee
{
private:
    string name;
    double basicsalary;
    double bonus;
public:
    employee()
    {
      name=" ";
      basicsalary=0;
      bonus=500;

    }
   employee(string na,int b,int bo=500)
    {
name=na;
basicsalary=b;
bonus=bo;

    }
    int getsalary() const
    {
        int total=basicsalary+bonus;
        cout<<"your curent salary is:"<<total<<endl;
    }


};
int main()
{
int n,b,bo;
string na,bi;
cout<<"how many employee are:";
cin>>n;
vector<employee>employees;
for(int i=0;i<n;i++)
{
    cout<<"enter the employee name:"<<endl;
    cin>>na;
    cout<<"enter the baisic salary:"<<endl;
    cin>>b;
    cout<<"if you want give bounse then write y anothe n:"<<endl;
    cin>>bi;
    if(bi=="y" || bi=="Y")
    {
        cout<<"enter the bouns:"<<endl;
        cin>>bo;
        employees.push_back(employee(na,b,bo));

        employees[i].getsalary();
    }
    else{
        employees.push_back(employee(na,b));
        employees[i].getsalary();
    }


}
return 0;
}
