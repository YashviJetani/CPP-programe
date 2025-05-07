#include <iostream>
using namespace std;
class Point
{
private:
    float x, y;

public:

    Point(float a = 0.0, float b = 0.0) : x(a), y(b) {}
    Point& moveX(float dx)
    {
        x += dx;
        return *this;
    }
    Point& moveY(float dy)
    {
        y += dy;
        return *this;
    }
    void print() const
    {
    cout << "Point(" << x << ", " << y << ")\n";
    }
};
int main()
 {
    float iX, iY;
    float moveXValue, moveYValue;
    cout << "Enter the initial x-coordinate: ";
    cin >> iX;
    cout << "Enter the initial y-coordinate: ";
    cin >> iY;
    cout << "Enter the movement in x direction: ";
    cin >> moveXValue;
    cout << "Enter the movement in y direction: ";
    cin >> moveYValue;
    Point p(iX,iY);
    p.moveX(moveXValue).moveY(moveYValue).print();

    return 0;
}
