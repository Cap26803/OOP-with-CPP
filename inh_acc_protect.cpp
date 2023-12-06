#include<iostream>
using namespace std;

class A{
protected:
    int protectedA;
public:
    void setA(int a){
    protectedA=a;
    }
    int getA(){
    return protectedA;
    }
};

int main(){
A obj;
obj.setA(1);
cout<<obj.getA()<<endl;
return 0;
}
