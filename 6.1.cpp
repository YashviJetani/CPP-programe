#include<iostream>
using namespace std;

struct ABC
{
    int a,b;
    ABC *n;

public:
    void InsertData()
    {
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
        n=NULL;
    }

    void DisplayData()
    {
        cout<<"Value of a:"<<a<<endl<<"Value of b:"<<b<<endl;
    }
};

int main()
{
    ABC *b=NULL ,*t;
    int choice;
    ABC *P = new ABC;
    next:cout<<"ENTER YOUR CHOICE:"<<endl<<"1.Insert Data"<<endl<<"2.Display Data"<<endl<<"ELSE exit"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            P -> InsertData();

            if(b == NULL)
            {
                b=P;
            }
            else
            {
                t=b;
                while(t -> n != NULL)
                {
                    t -> n = P;
                }
            }
            goto next;
        }

    case 2:
        {
            if(b==NULL)
            {
                cout<<"There is no data!!"<<endl;
            }
            else
            {
                t=b;
                do
                {
                    P -> DisplayData();
                    t = t->n;

                }
                while(t != NULL);

            }
             goto next;
        }

    default:
        {
            break;
        }
    }
    return 0;
}
