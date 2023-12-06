#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A()
    {
        this->a=10;
    }
    void printData()
    {
        cout<<a<<endl;
    }
    void modifyData(int x)const
    {
        this->a+=x;
    }
};
int main()
{
    A obj;
    obj.modifyData(5);
    obj.printData();
    return 0;
}