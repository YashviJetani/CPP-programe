#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
 void AddIteam()
 {
     double q;
     double price;
     string name;
     ofstream file("F7.3.txt",ios::app);
     if(!file)
     {
         cout<<"error"<<endl;

     }
     cout<<"Enter the fruit name:"<<endl;
     cin>>name;
    cout<<"Enter the quantity:"<<endl;
     cin>>q;
     cout<<"Enter the prize:"<<endl;
     cin>>price;

      file << name << "    " << q << "     " << price << endl;
    cout << "Item added successfully!" << endl;
 }
 void ViewIteam()
{
    ifstream file("F7.3.txt");
    if (!file)
    {
        cout << "Error opening file." << endl;
        return;
    }
    string line;
    cout << "\nAll Items in the inventory:\n";
    while (getline(file, line))
    {
        cout << line << endl;
    }
}
void SearchIteam()
{double q;
     double price;
    string name;
    ifstream file("F7.3.txt");
    if (!file)
    {
        cout << "Error opening file." << endl;
        return;
    }
    bool found = false;
    cout << "Enter the fruit name to search for: ";
    cin >> name;

    string file_name;
    while (file >> file_name >> q >> price)
    {
        if (file_name == name)
        {
            cout << "Item found: " << file_name << " " << q << " " << price << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Item not found." << endl;
    }

    file.close();
}


int main()
{
    int choice;
    do{
        cout<<"\n 1.AddIteam \n 2.ViewIteam \n 3.SearchIteam \n 4.Exist \n"<<endl;
        cout<<"enter the choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                AddIteam();
                break;
            }
        case 2:
            {
               ViewIteam ();
               break;

            }
        case 3:
            {
               SearchIteam();
                break;
            }
        case 4:
            {
                cout<<"exists:"<<endl;
            }
        }
    }while(choice!=4);
}
