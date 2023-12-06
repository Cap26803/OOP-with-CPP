#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calArea() const = 0;
};

// The class Rectangle inherits from Shape and implements the calArea() function.
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double length, double breadth) : length(length), breadth(breadth) {}
    // The calArea() function returns the area of the rectangle.
    double calArea() const override {
        return (length * breadth);
    }
};

// The class Circle inherits from Shape and implements the calArea() function.
class Circle : public Shape {
    double radius;
public:
    Circle(double radius) : radius(radius) {}
    // The calArea() function returns the area of the circle.
    double calArea() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Create a new instance of the Rectangle class.
    Shape* shape1 = new Rectangle(2, 3);
    // Call the calArea() function on the Rectangle object.
    cout << "area of rectangle is " << shape1->calArea() << endl;
    // Create a new instance of the Circle class.
    Shape* shape2 = new Circle(2);
    // Call the calArea() function on the Circle object.
    cout << "area of circle is " << shape2->calArea() << endl;
    // Return 0 to indicate success.
    return 0;
}