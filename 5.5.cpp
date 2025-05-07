#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
class Shape {
public:
    virtual double Area() const=0 ;
     virtual ~Shape() {}
};
class Rectangle : public Shape
 {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)  {length=l, width=w;
    }

        double Area()const override
        {
        return length * width;
        }
};
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double Area() const override
     {
        return M_PI * radius * radius;
    }
};
int main()
{
    vector<Shape*> shapes;
    int numShapes;
    cout << "How many shapes do you want to input? ";
    cin >> numShapes;
    for (int i = 0; i < numShapes; ++i)
        {
        int shapeType;
        cout << "\nSelect shape type (1 for Rectangle, 2 for Circle): ";
        cin >> shapeType;

        if (shapeType == 1)
            {
            double length, width;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            shapes.push_back(new Rectangle(length, width));
        } else if (shapeType == 2)
        {

            double radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            shapes.push_back(new Circle(radius));
        } else
         {
            cout << "Invalid shape type selected. Please try again.\n";
            --i;
        }
    }
    for (int i = 0; i < shapes.size(); ++i)
        {
        cout << "Shape " << (i + 1) << " Area: " << shapes[i]->Area() << endl;
    }
    return 0;
}



