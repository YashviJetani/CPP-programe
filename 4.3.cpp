#include <iostream>
#include <vector>
using namespace std;
class Fuel
{
   protected:
    string fuelType;
   public:
    Fuel(string fuel)
    {
        fuelType = fuel;
    }

    void displayFuel()
     {
        cout << "Fuel Type: " << fuelType << endl;
     }
};
class Brand
{
protected:
    string brandName;
public:
    Brand(string brand)
     {
        brandName = brand;
    }

    void displayBrand()
     {
        cout << "Brand: " << brandName << endl;
    }
};
class Car : public Fuel, public Brand
{
public:
    Car(string brand, string fuel) : Brand(brand), Fuel(fuel) {}

    void displayInfo()
    {
        displayBrand();
        displayFuel();

    }
};
int main() {
    vector<Car> s;
    int n;
    cout << "Enter the number of cars to add to the service queue: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
        {
            string brand, fuel;
            cout << "\nEnter details for Car " << i + 1 << ":\n";
            cout << "Brand: ";
            cin>>brand;
            cout << "Fuel Type: ";
            cin>>fuel;
            s.push_back(Car(brand, fuel));

        }
        for (int i = 0; i < s.size(); ++i)
            {
             cout << "Car " << i + 1 << " Details:\n";
             s[i].displayInfo();
            }

    return 0;
}
