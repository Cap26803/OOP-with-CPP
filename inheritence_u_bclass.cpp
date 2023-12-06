#include<iostream>
using namespace std;

class A{
public:
    int a;
    void printData(){
    cout<<"a:"<<a<<endl;
    }
};
//Derived class
class B:public A{
};

int main(){
B obj;
obj.a=10;
obj.printData();
return 0;
}
