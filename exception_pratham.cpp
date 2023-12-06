#include<iostream>
using namespace std;

class A{
public:
    int x,y;

int divide_nos(int x, int y)
{
    if(y==0)
    {
        throw 1;
    }
    return(x/y);
}
};

int main()
{
    A obj;
    try{
        cout<<obj.divide_nos(10,5);
    }
    catch(int x)
    {
        cout<<"Divide by 0 error";
    }
    return 0;
}