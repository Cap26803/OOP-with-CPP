#include<iostream>
using namespace std;

class Base{
public:
    virtual void show()=0;
};
class Derv1:public Base{
public:
    void show(){
    cout<<"Derv1\n";
    }
};
class Derv2:public Base{
public:
    void show(){
    cout<<"Derv2\n";
    }
};
int main()
[
    Base obj;
    Derv1 dv1;
    Derv2 dv2;
    Base* objects[2];
    objects[0]=&dv1;
    objects[0]->show();
    objects[1]=&dv2;
    objects[1]->show();

    return 0;
]