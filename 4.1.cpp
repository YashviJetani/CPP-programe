
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r)
     {
        radius = r;
    }

    double area() {
        return 3.14 * radius * radius;
    }
};

int main()
 {
    int n;
    cout << "How many circles? ";
    cin >> n;

    vector<Circle> circles;

    for (int i = 0; i < n; i++)
        {
        double r;
        cout << "Enter radius for circle " << i + 1 << ": ";
        cin >> r;
        circles.push_back(Circle(r));
    }

    for (int i = 0; i < n; i++) {
        cout << "Circle " << i + 1 << " Radius: " << circles[i].radius
             << "and Area: " << circles[i].area() << endl;
    }

    return 0;
}
