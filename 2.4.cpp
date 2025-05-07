#include <iostream>
#include <vector>
using namespace std;

class store
{
private:
    int itemid;
    string itemname;
    double price;
    int quantityinStock;
public:
    store()
    {
       itemid=0;
       itemname=" ";
       price=0;
       quantityinStock=0;
    }
    store(int id,string name,double p,int qstock)
    {
       itemid=id;
       itemname=name;
       price=p;
       quantityinStock=qstock;
    }
    int getid() const
    {
        return itemid;
    }
    int sell(int qstock)
    {

        if (qstock<= 0)
            {
            cout << "Invalid quantity to sell.\n";
        } else if (qstock>quantityinStock)
         {
            cout << "Error: Not enough stock to sel.\n";
        } else
        {
            quantityinStock -= qstock;
            cout << "Sold " << qstock << " unit(s) of " << itemname << ".\n";
        }
    }
    void addStock(int qstock)
     {
        if (qstock > 0) {
            quantityinStock += qstock;
            cout << "Stock added successfully.\n";
        } else
        {
            cout << "Invalid quantity to add.\n";
        }
    }


    void display()
    {
        cout << "ID: " << itemid<<endl;
        cout << "Name: " << itemname<<endl;
        cout << " Price:" << price<<endl;
        cout<< " Quantity in stock: " << quantityinStock << endl;
    }



};
int hi( vector <store>stores, int id)
     {
    for (int i = 0; i <stores.size(); i++)
        {
        if (stores[i].getid() == id)
            return i;
    }
    return -1;
    }


int main()
{
    int n,id,qstock;
    string name;
    double p;

    vector< store>stores;
    int choice;
    do
        {
    cout << " Inventory Management Menu \n";
    cout << "1. Add New Item\n";
    cout << "2. Add Stock to Item\n";
    cout << "3. Sell Item\n";
    cout << "4. Display Inventory\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
           cout << "Enter Item ID: ";
            cin >> id;
            cout << "Enter Item Name: ";
            cin>>name;
            cout << "Enter Price: ";
            cin >> p;
            cout << "Enter Quantity: ";
            cin >>qstock;
            stores.push_back(store(id, name, p, qstock));
            break;
        }
    case 2:
        {
            cout << "Enter Item ID to add stock: ";
            cin >> id;
            int index=hi(stores,id);
            if (index != -1)
                {
                cout << "Enter quantity to add: ";
                cin >> qstock;
                stores[index].addStock(qstock);
            } else
             {
                cout << "Item ID not found.\n";
            }
            break;
            }


        case 3:
        {
            cout << "Enter Item ID to sell: ";
            cin >> id;
            int index=hi(stores,id);
            if(index!=-1)
            {
                cout << "Enter quantity to sell: ";
                cin >> qstock;
                stores[index].sell(qstock);
            }else
            {
                cout << "Item ID not found.\n";
            }
            break;

        }
        case 4:
            {
                for ( auto& item : stores)
                    {
                item.display();
            }
            break;
            }
        case 5:
            {
                cout<<"existing"<<endl;
            }

    }
    }while(choice!=5);
}
