#include<iostream>
using namespace std;
class Point
{
    int A,B;
public:
    void InsertData()
    {
        cout<<"Enter the value of A:";
        cin>>A;
        cout<<"Enter the value of B:";
        cin>>B;
    }
    Point operator+(Point &P)
    {
        Point C;
        C.A=A+P.A;
        C.B=B+P.B;
        return C;
    }

    bool operator==(Point &D)
    {
        if(A==D.A)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void operator-()
    {
        A=(-A);
        B=(-B);
    }

    void Display()
    {
        cout<<"A="<<A<<endl<<"B="<<B<<endl;
    }
};

int main()
{
    Point P1,P2,P3;
    P1.InsertData();
    P2.InsertData();
    P3=P1+P2;
    P3.Display();
    return 0;
}
