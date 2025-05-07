
#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
      float add(float a, float b)
      {
        return a + b;
      }
      float add(int a, float b)
      {
        return a + b;
      }
      float add(float a, int b)
       {
        return a + b;
       }
        void displayResult(float result)
         {
        cout << "The result is: " << result << endl;
         }
};
int main() {
    Calculator calc;
    int int1, int2;
    float float1, float2;
    int choice;
     do {
        cout << "1. Add two integers\n";
        cout << "2. Add two floating-point numbers\n";
        cout << "3. Add an integer and a floating-point number\n";
        cout << "4. Add a floating-point number and an integer\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two integers: ";
                cin >> int1 >> int2;
                cout << "The sum of the integers is: " << calc.add(int1, int2) << endl;
                break;
            case 2:
                cout << "Enter two floating-point numbers: ";
                cin >> float1 >> float2;
                cout << "The sum of the floating-point numbers is: " << calc.add(float1, float2) << endl;
                break;
            case 3:
                cout << "Enter an integer and a floating-point number: ";
                cin >> int1 >> float1;
                cout << "The sum of the integer and floating-point number is: " << calc.add(int1, float1) << endl;
                break;
            case 4:
                cout << "Enter a floating-point number and an integer: ";
                cin >> float1 >> int1;
                cout << "The sum of the floating-point number and integer is: " << calc.add(float1, int1) << endl;
                break;
            case 0:
                cout << "Exiting!\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

