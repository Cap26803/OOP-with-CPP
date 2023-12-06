#include<iostream>
using namespace std;

class Base{
public:
    virtual ~Base(){
        cout<<"Base is destroyed"<<endl;
    }
};

class Derv1:public Base{
public:
    ~Derv1(){
        cout<<"Derived Destroyed"<<endl;
    }
};

int main(){
    Base* pbase=new Derv1;
    delete pbase;
    return 0;
}