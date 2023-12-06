#include <iostream>

using namespace std;

class Rectangle {
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double calculateArea() const {
        return length * width;
    }

    void displayAttributes() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rectangle1(4.5, 5.2);
    Rectangle rectangle2(3.7, 2.8);
    Rectangle rectangle3(6.1, 9.4);

    cout << "Rectangle 1 Attributes:" << endl;
    rectangle1.displayAttributes();

    cout << "\nRectangle 2 Attributes:" << endl;
    rectangle2.displayAttributes();

    cout << "\nRectangle 3 Attributes:" << endl;
    rectangle3.displayAttributes();

    return 0;
}
