#include <iostream>
using namespace std;

class A {
public:
  template <typename data1, typename data2>
  data1 addData(data1 x, data2 y) {
    return (x + y);
  }
};

int main() {
  A a1;
  int num1 = 10, num2 = 10, result = 0;
  result = a1.addData(num1, num2);          
  cout << "result = " << result << endl;
  result = a1.addData(10.1f, 12.0f);
  cout << "result = " << result << endl;
  result = a1.addData(12.3, 11.2);
  cout << "result = " << result << endl;

  return 0;
}
