#include <iostream>
using namespace std;

class Parent {
protected:
    int baseData;
};

class Child1 : virtual public Parent {
public:
    void setdata1() {
        baseData = 10;
    }
};

class Child2 : virtual public Parent {
public:
    void setdata2() {
        baseData = 100;
    }
};

class GrandChild : public Child1, public Child2 {
public:
    void setdata3() {
        baseData = 1000;
    }

    int getdata() {
        return baseData;
    }
};

int main() {
    Parent p;
    Child1 c1;
    Child2 c2;
    GrandChild gc;
    c1.setdata1();
    c2.setdata2();
    gc.setdata3();
    gc.setdata1();
    gc.setdata2();
    cout << gc.getdata() << endl;
    return 0;
}
