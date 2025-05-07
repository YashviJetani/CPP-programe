#include<iostream>
using namespace std;
class student
{
private:
    int rollno;
    int m[3];
    string name;
    public:
        student()
        {

            string name="no name";
            int rollno=0;
            m[0]=m[1]=m[2]=0;
        }
        student(int roll,string n,int m1,int m2,int m3)
        {
            rollno=roll;
    name=n;
    m[0]=m1;
    m[1]=m2;
    m[2]=m3;
        }

       /* student(int roll,string n,int marks[])
        {
            rollno=roll;
    name=n;
      for(int i=0;i<3;i++)
    {

        m[i]=marks[i];

    }


        }*/



    void display()
    {
         cout<<"name:"<<name<<endl;
     cout<<"roll nomber is:"<<rollno<<endl;
    cout<<"average is:"<<average()<<endl;
    }
    float average()
    {
     return (m[0]+m[1]+m[2])/3.0;
    }
};
int main()
{
    student s[3];
int roll;
string n;
int marks[3];
    for(int i=0;i<3;i++)
    {
        cout<<"enter the roll number"<<" "<< i+1 <<" student"<<endl;
          cin>>roll;
          cout<<"enter the name"<<endl;
          cin>>n;

       for(int i=0;i<3;i++)
    {

        cout<<"enter marks"<<i+1<<endl;
        cin>>marks[i];
    }
    s[i]=student(roll,n,marks[0],marks[1],marks[2]);

//s[i]=student(roll,n,marks);

  s[i].display();
      }
      cout<<"My ID is 24CE042"<<endl;
      return 0;
}

