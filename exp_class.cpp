#include <iostream>
using namespace std;
class Point {
public:
    // Default constructor
    Point() {
        x_ = 0;
        y_ = 0;
    }

    // Parametric constructor
    Point(int x, int y) {
        x_ = x;
        y_ = y;
    }

    // Copy constructor
    Point(const Point& other) {
        x_ = other.x_;
        y_ = other.y_;
    }

    void printPoint() const {
        std::cout << "Point coordinates: (" << x_ << ", " << y_ << ")" << std::endl;
    }

    void resetPoint() {
        x_ = 0;
        y_ = 0;
    }

    void movePoint(int a, int b) {
        x_ = a;
        y_ = b;
    }

private:
    int x_, y_;
};

int main() {
    // Create a point using the default constructor
    Point p1;
    p1.printPoint();  // Output: (0, 0)

    // Create a point using the parametric constructor
    Point p2(3, 4);
    p2.printPoint();  // Output: (3, 4)

    // Create a point using the copy constructor
    Point p3(p2);
    p3.printPoint();  // Output: (3, 4)

    // Move the point to a new location
    p2.movePoint(1, 2);
    p2.printPoint();  // Output: (1, 2)

    // Reset the point to the origin
    p2.resetPoint();
    p2.printPoint();  // Output: (0, 0)

    return 0;
}