#include <iostream>
using namespace std;

template <typename T>
float area(T obj) {
  return obj.get_area();
}

class Circle {
public:
  float radius;

  float get_area() {
    return 3.14 * radius * radius;
  }
};

class Rectangle {
public:
  float width;
  float height;

  float get_area() {
    return width * height;
  }
};

int main() {
  Circle circle;
  circle.radius = 5;

  Rectangle rectangle;
  rectangle.width = 10;
  rectangle.height = 20;

  cout << "Area of circle: " << area(circle) << endl;
  cout << "Area of rectangle: " << area(rectangle) << endl;

  return 0;
}
