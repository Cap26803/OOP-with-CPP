#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void set(int x)
    {
    a=x;
    }
    void get()
    {
    cout<<a;
    }
};
int main()
{
    A A1;
    A1.set(10);
    A1.get();
    return 0;
}
