#include<iostream>
using namespace std;

class A
{
    public:
    int a,b;
   
    void getdata()
    {
        cout<<("Enter the first number: ");
        cin>>a;
        cout<<("Enter the second number: ");
        cin>>b;
    }
    void division()
    {
       if(b==0)
        throw 1;
       cout<<"The division of " <<a<<" and "<<b<<" is = "<<a/b<<endl;
    }
};
int main()
{
    A obj;
    int z=0;
    do{
            z=0;

    try
    {
        obj.getdata();
        obj.division();

    }
    catch(int x)
    {
        cout<<"Error occured as the provided numbers cannot be divided by 0\n";
        z=1;
    }
    cout<<"YOU MAY TRY ONCE AGAIN\n"<<endl;
    } while(z);
}