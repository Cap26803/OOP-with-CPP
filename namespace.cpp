#include<iostream>
namespace s1
{
    int a;
}
namespace s2
{
    int a;
}
using namespace std;
using namespace s1;
using namespace s2;
int main()
{
    s1::a=100;
    cout<<s1::a;
    cout<<"\n";
    s2::a=200;
    cout<<s2::a;
}
