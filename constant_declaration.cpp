#include<iostream>
using namespace std;
class A
{
    public:
    const int a=10;            //const (constant) means read-only, we cannot change the value
};
int main()
{
    A obj;
    obj.a=10;
    cout<<obj.a<<endl;
    return 0;
}