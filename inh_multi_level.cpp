#include<iostream>
using namespace std;

class A{
protected:
    int protectedA;
};
class B: public A{
public:
    void setData(int a){
    protectedA=a;
    }
    int getData(){
    return protectedA;
    }
};
class C: public B{
public:
    void setData(int a){
    protectedA=a;
    }
    int getData(){
    return protectedA;
    }
};
int main()
{
    C obj;
    obj.setData(10);
    cout<<obj.getData()<<endl;
    return 0;
}
