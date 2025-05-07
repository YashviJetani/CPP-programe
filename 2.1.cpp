#include <iostream>

using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:

    Rectangle(float l, float w) : length(l), width(w) {}
    float calculate_area()
    {
        return length * width;
    }
    float calculate_perimeter()
     {
        return 2 * (length + width);
    }
  void update_dimensions(float l, float w)
  {
        length = l;
        width = w;
    }
    void display_info()
    {
cout << "Length: " << length << ", Width: " << width
             << ", Area: " << calculate_area() << ", Perimeter: " << calculate_perimeter() << endl;
    }
};

int main() {

    Rectangle rect1(10, 5);
    Rectangle rect2(15, 7);
    cout << "Initial Rectangles Info:" << endl;
    rect1.display_info();
    rect2.display_info();
    rect1.update_dimensions(12, 6);
    cout << "\nUpdated Rectangles Info:" << endl;
    rect1.display_info();
    rect2.display_info();
    return 0;
}
