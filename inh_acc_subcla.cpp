/*#include<iostream>
using namespace std;

class A{
protected:
    int protectedA;
};
class B:public A{
public:
    void setData(int a){
    protectedA=a;           //can be initialized using constructors
    }
    int getData(){
    return protectedA;
    }
};
int main(){
B obj;
obj.setData(11);
cout<<obj.getData()<<endl;
return 0;
}
*/

//code using constructor (parameterized)
#include<iostream>
using namespace std;

class A{
protected:
    int protectedA;
/*public:
    A(int a):
        protectedA(a){
    }
    */
    A(){
    protectedA=100;
    }
};

class B:public A {
public:
    /*B(int a):
        A(a){
    }*/
    A(){
    protectedA=100;
    }
    int getData() {
        return protectedA;
    }
};

int main() {
    B obj(100);
    cout<<obj.getData()<<endl;
    return 0;
}
