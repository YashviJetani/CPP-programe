#include <iostream>
using namespace std;

class Base {
public:

    virtual ~Base()
     {
        cout << "Base destructor called" << endl;
     }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived() {
        data = new int[100];
        cout << "Derived constructor called" << endl;
    }

    ~Derived() {
        delete[] data;
        cout << "Derived destructor called, memory released" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;
    return 0;
}
