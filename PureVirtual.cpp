//Abstract class and pure virtual functions
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
{
    Derv1 dv1;
    Derv2 dv2;
    Base *ptr;

    ptr=&dv1;
    ptr->show();
    ptr=&dv2;
    ptr->show();

    Base* base[2];
    base[0]=&dv1;
    base[1]=&dv2;
    base[0]->show();
    base[1]->show();

    return 0;
}
