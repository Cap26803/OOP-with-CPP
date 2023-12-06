#include<iostream>
using namespace std;

class A {
private:
    int a;
public:
    A() : a(0) {
        cout << "Default constructor: A" << endl;
    }

    A(int a) : a(a) {
        cout << "Parameterized constructor: A" << endl;
    }
};

class B : public A {
public:
    int b;

    B() : b(0) {
        cout << "Default constructor: B" << endl;
    }

    B(int a) : A(a), b(0) {
        cout << "Parameterized constructor: B" << endl;
    }
};

int main() {
    A obj;
    B obj1;
    A obj2(10);
    B obj3(11);
    return 0;
}
