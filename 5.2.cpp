#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex subtract(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }
     void display()
     {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }
void input()
 {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
};
int main() {
    Complex c1, c2, result;
    int choice;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();

    do {
        cout << "\n 1. Add the complex numbers\n";
        cout << "2. Subtract the complex numbers\n";
        cout << "3. Display the complex numbers\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                result = c1.add(c2);
                cout << "The sum is:\n "<<endl;
                result.display();
                break;
            case 2:
                result = c1.subtract(c2);
                cout << "The difference is: "<<endl;
                result.display();
                break;
            case 3:
                cout << "First complex number: ";
                c1.display();
                cout << "Second complex number: ";
                c2.display();
                break;
            case 0:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
