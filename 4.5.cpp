#include<iostream>
using namespace std;


class student
{
protected:
    int marks;
public:
    int input()
    {
        cout<<"enter the marks:"<<endl;
        cin>>marks;
    }
     virtual char computeGrade()
     {
        return 'N';
    }
     void display()
     {
         cout<<"marks is:"<<marks<<"and grade is:"<<computeGrade()<<endl;
     }
     virtual ~student(){}

};

class Undergraduate : public student {
public:
    char computeGrade() override {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }
};

class Postgraduate : public student{
public:
    char computeGrade() override
    {
        if (marks >= 95) return 'A';
        else if (marks >= 85) return 'B';
        else if (marks >= 75) return 'C';
        else if (marks >= 65) return 'D';
        else return 'F';
    }
};
int main()
{
    student*s;
    int t,p;
  cout<<"how  many student here:";
  cin>>p;
  for(int i=0;i<p;i++)
    {
    cout << "Enter 1 for Undergraduate, 2 for Postgraduate:";
    cin>>t;

    if(t==1)
    {
        s = new Undergraduate();
    }
    else{
         s = new Postgraduate();
    }

    s->input();
    s->display();
    delete s;
    }

}
