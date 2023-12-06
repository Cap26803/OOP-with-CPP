#include<iostream>
using namespace std;

class A{
private:
    int privateA;
protected:
    int protectedA;
public:
    int publicA;
};

class B:public A{

};

int main(){
A obj;
//obj.privateA=10;
//obj.protectedA=10;
obj.publicA=10;
cout<<obj.publicA<<endl;

B obj1;
//obj1.privateA=10;
//obj1.protectedA=10;
obj1.publicA=11;
cout<<obj1.publicA<<endl;
}

