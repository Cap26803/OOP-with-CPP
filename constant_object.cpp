#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A()
    {
        this->a=a;
    }
    A(int a)
    {
        this->a=a;
    }
    void printData()
    {
        cout<<this->a<<endl;
    }
    void printData()            
    const
    {
        cout<<this->a<<endl;
    }
    void modifyData(int x)
    const
    {
        a+=x;
    }
};
int main()
{
    const A obj(10);        //constant object
    obj.printData();
    obj.modifyData(10);
    return 0;
}