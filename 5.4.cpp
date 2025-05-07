#include<iostream>
using namespace std;
class Fahrenheit;
class celcius
{
    int Celcius;
public:
    int InsertData()
    {
        cout<<"Enter the value of tempreature in celcius:";
        cin>>Celcius;
    }
    int GetData()
    {
        return Celcius;
    }
    int DisplayData()
    {
        cout<<"Celcius:"<<Celcius;
    }
    void operator=(Fahrenheit &f);
};

class Fahrenheit
{
    int Fahrenheit;
public:
    int InsertData()
    {
        cout<<"Enter the temperature in Fahrenheit:";
        cin>>Fahrenheit;
    }
    int GetData()
    {
        return Fahrenheit;
    }
    int DisplayData()
    {
        cout<<"Fahrenheit:"<<Fahrenheit;
    }
    void operator=(celcius &c)
    {
        Fahrenheit=(c.GetData())*(1.8)+32;
    }
};
void celcius::operator=( Fahrenheit &f)
{
    Celcius=(f.GetData()-32)/1.8;
}

int main()
{
    celcius C;
    Fahrenheit F;
    int choice;

    cout<<"Enter your choice:"<<endl<<"1.Fahrenheit to Celcius"<<endl<<"2.Celcius to Fahrenheit"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
          F.InsertData();
          C=F;
          C.DisplayData();
          break;
        }
    case 2:
        {
          C.InsertData();
          F=C;
          F.DisplayData();
          break;
        }
    default:
        {
            cout<<"invalid!!!";
            break;
        }
    }

    return 0;
}
