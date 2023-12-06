#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    A()
    {
        cout<<"Default Constructor"<<endl;
        this->a=0;   //this:is a pointer, self reference
        this->b=0;
    }
    //Observation: the omstance variable names and formal parameters are same
    A(int a,int b)
    {
        cout<<"Parameterized constructor"<<endl;
        this->a=a;
        this->b=b;
    }
    A(const A &obj)
    {
        cout<<"copy constructor is invoked"<<endl;
        this->a=obj.a;
        this->b=obj.b;
    }
    void printData()
    {
        cout<<a<<":"<<b<<endl;    
    }
};
int main()
{
    A obj, obj1;                        //default constructor
    cout<<obj.a<<":"<<obj.b<<endl;  
    cout<<obj1.a<<":"<<obj1.b<<endl;
    A obj2(10,10);                      //Parameterized constructor
    cout<<obj2.a<<":"<<obj2.b<<endl;
    A obj3=obj2;                        //copy constructor is invoked
    cout<<obj3.a<<":"<<obj3.b<<endl;
    A obj4(obj3);                       //copy constructor is invoked
    cout<<obj4.a<<":"<<obj4.b<<endl;
    return 0;
}
