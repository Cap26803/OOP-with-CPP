#include<iostream>
using namespace std;
class A{
public:
    int a;
    A(){
    this->a=0;
    }
    A(int a){
    this->a=a;
    }
    //print array of objects
    void printA(A obj[],int n){
    int i=0;
    for(i=0;i<n;i++)
        cout<<obj[i].a<<endl;
    }
};
int main(){
A obj;
A obj1(1),obj2(2),obj3(3);      // creating array elements
A objects[]={obj1,obj2,obj3};
obj.printA(objects,3);
return 0;
}
