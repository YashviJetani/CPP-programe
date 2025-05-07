#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
struct Product
{
    string name;
    int quantity;
    float price;
};
const int MAX_PRODUCTS = 10;
Product inventory[MAX_PRODUCTS];
int productCount = 0;
void loadInventory() {
    ifstream file("F7.4.txt");

    if (!file) {
        cout << "No previous inventory file found, starting fresh.\n";
        return;
    }

    string line;
    while (getline(file, line) && productCount < MAX_PRODUCTS) {
        stringstream ss(line);
        string name;
        int quantity;
        float price;

        ss >> name >> quantity >> price;

        inventory[productCount].name = name;
        inventory[productCount].quantity = quantity;
        inventory[productCount].price = price;

        productCount++;
    }

    file.close();
}
void saveInventory() {
    ofstream file("inventory.txt", ios::app);
    if (!file)
        {
        cout << "Error opening file to save inventory.\n";
        return;
    }

    for (int i = 0; i < productCount; i++)
        {
        file << inventory[i].name << " "
             << inventory[i].quantity << " "
             << inventory[i].price << endl;
    }

    file.close();
}
void addProduct()
{
    if (productCount >= MAX_PRODUCTS)
        {
        cout << "Inventory is full. Cannot add more products.\n";
        return;
    }

    Product p;
    cout << "Enter product name: ";
    cin.ignore();
    getline(cin, p.name);
    cout << "Enter quantity: ";
    cin >> p.quantity;
    cout << "Enter price: ";
    cin >> p.price;

    inventory[productCount] = p;
    productCount++;
   saveInventory();
    cout << "Product added successfully!\n";
}
void viewInventory()
 {
    if (productCount == 0)
        {
        cout << "No products in inventory.\n";
        return;
    }
    for (int i = 0; i < productCount; i++)
    {
        cout << "Product Name: " << inventory[i].name << "\n";
        cout << "Quantity: " << inventory[i].quantity << "\n";
        cout << "Price: $" << inventory[i].price << "\n";

    }
}
void searchProduct()
 {
    string searchName;
    cout << "Enter product name to search: ";
    cin.ignore();
    getline(cin, searchName);
  bool found = false;
    for (int i = 0; i < productCount; i++)
        {
        if (inventory[i].name == searchName)
        {
            cout << "Product Found:\n";
            cout << "Name: " << inventory[i].name << "\n";
            cout << "Quantity: " << inventory[i].quantity << "\n";
            cout << "Price: $" << inventory[i].price << "\n";
            found = true;
            break;
        }
    }

    if (!found)
        {
        cout << "Product not found.\n";
    }
}

int main()
{
    int choice;

    loadInventory();
    do {
        cout << "\nInventory Management Menu:\n";
        cout << "1. Add Product\n";
        cout << "2. View Inventory\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                viewInventory();
                break;
            case 3:
                searchProduct();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

